#include <bits/stdc++.h>
using namespace std;
// Bismillah

// Saiyedul Abrar, ID: 0812320205101022
// CSE Dept, Bangladesh Army University of Engineering & Technology
// Qadirabad Cantonment, Natore, Bangladesh
// Email: saiyedul.abrar1430@gmail.com, Phone: +8801533713957

class Node
{
public:
    int bookID;
    string title;
    string author;
    int pubYear;
    int availability;
    Node *next;

    Node(int id, string t, string a, int y)
    {
        bookID = id;
        title = t;
        author = a;
        pubYear = y;
        availability = 1;
        next = NULL;
    }
};

void bookinss(Node *&head, Node *&tail, int id, string title, string author, int year)
{
    Node *newBook = new Node(id, title, author, year);

    if (!head || id < head->bookID)
    {
        newBook->next = head;
        head = newBook;
        if (!tail)
            tail = newBook;
        return;
    }

    Node *temp = head;
    while (temp->next && temp->next->bookID < id)
    {
        temp = temp->next;
    }
    newBook->next = temp->next;
    temp->next = newBook;
    if (!newBook->next)
        tail = newBook;
}

vector<Node *> vecconvrt(Node *head)
{
    vector<Node *> vec;
    Node *curr = head;
    while (curr)
    {
        vec.push_back(curr);
        curr = curr->next;
    }
    return vec;
}

void merge(vector<Node *> &books, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<Node *> lefty(n1), righty(n2);

    for (int i = 0; i < n1; i++)
        lefty[i] = books[left + i];
    for (int j = 0; j < n2; j++)
        righty[j] = books[mid + 1 + j];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (lefty[i]->pubYear <= righty[j]->pubYear)
        {
            books[k] = lefty[i];
            i++;
            k++;
        }
        else
        {
            books[k] = righty[j];
            j++;
            k++;
        }
    }
    while (i < n1)
        books[k++] = lefty[i++];
    while (j < n2)
        books[k++] = righty[j++];
}

void mergesort(vector<Node *> &books, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergesort(books, left, mid);
        mergesort(books, mid + 1, right);
        merge(books, left, mid, right);
    }
}

void newlistt(Node *&head, Node *&tail, vector<Node *> &sortedBooks)
{
    if (sortedBooks.empty())
        return;
    head = sortedBooks[0];
    Node *curr = head;
    for (int i = 1; i<sortedBooks.size(); i++)
    {
        curr->next = sortedBooks[i];
        curr = curr->next;
    }
    curr->next = NULL;
    tail = curr;
}

void yearsort(Node *&head, Node *&tail)
{
    if (!head || !head->next)
        return;
    vector<Node *> bookVec = vecconvrt(head);
    mergesort(bookVec, 0, bookVec.size() - 1);
    newlistt(head, tail, bookVec);
}

void findingbook(Node *head, int id)
{
    vector<Node *> books = vecconvrt(head);
    int left = 0, right = books.size() - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (books[mid]->bookID == id)
        {
            cout << "\nFound it!\n";
            cout << "ID: " << books[mid]->bookID << "\n";
            cout << "Title: " << books[mid]->title << "\n";
            cout << "Author: " << books[mid]->author << "\n";
            cout << "Year: " << books[mid]->pubYear << "\n";
            cout << "Status: " << (books[mid]->availability ? "Available" : "Checked Out") << "\n";
            return;
        }
        if (books[mid]->bookID < id)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << "\nNo book with ID " << id << " here.\n";
}

void availablee(Node *head, int id)
{
    Node *curr = head;
    while (curr)
    {
        if (curr->bookID == id)
        {
            cout << "\nBook ID " << id << " is "
                 << (curr->availability ? "Available" : "Checked Out") << "\n";
            return;
        }
        curr = curr->next;
    }
    cout << "\nBook not in the system.\n";
}

void displaybook(Node *head)
{
    cout << "\nHere's the full book list:\n";
    Node *curr = head;
    while (curr)
    {
        cout << "ID: " << curr->bookID << "  Title: \"" << curr->title
             << "\"  Author: " << curr->author << "  Year: " << curr->pubYear
             << "  " << (curr->availability ? "Available" : "Checked Out") << "\n";
        curr = curr->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;

    for (int i = 0; i < numBooks; i++)
    {
        int id, year;
        string title, author;
        cout << "\nBook no. " << i + 1 << " details:\n";
        cout << "ID: ";
        cin >> id;
        cin.ignore();
        cout << "Title: ";
        getline(cin, title);
        cout << "Author: ";
        getline(cin, author);
        cout << "Year: ";
        cin >> year;

        bookinss(head, tail, id, title, author, year);
    }

    displaybook(head);

    int searchID;
    cout << "\nBook ID to search: ";
    cin >> searchID;
    findingbook(head, searchID);

    yearsort(head, tail);
    cout << "\nSorted by publication year:\n";
    displaybook(head);

    int availID;
    cout << "\nCheck availability for Book ID: ";
    cin >> availID;
    availablee(head, availID);

    return 0;
    // alhamdulillah
}