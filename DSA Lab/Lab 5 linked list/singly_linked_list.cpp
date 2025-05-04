#include <bits/stdc++.h>
using namespace std;
// bismillah
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void create_list(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void insert_any_position(Node *&head, int idx, int val)
{
    if (idx < 1)
    {
        cout << "Invalid index!" << endl;
        return;
    }
    Node *newnode = new Node(val);

    if (idx == 1)
    {
        newnode->next = head;
        head = newnode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < idx - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Invalid index!" << endl;
            delete newnode;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Invalid index!" << endl;
        delete newnode;
        return;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
void print_node_details(Node *head)
{
    cout << "Node Address\tNode Value\tNext Node Address" << endl;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp << "\t" << temp->val << "\t\t" << temp->next << endl;
        temp = temp->next;
    }
}
void delete_at_head(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}
void delete_any_pos(Node *&head, int ind)
{
    if (head == NULL || ind < 1)
    {
        cout << "Invalid position or empty list!" << endl;
        return;
    }
    if (ind == 1)
    {
        delete_at_head(head);
        return;
    }

    Node *temp = head;
    for (int i = 1; i < ind - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Invalid index!" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp->next == NULL)
    {
        cout << "Invalid index!" << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}
void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = tail = NULL;
        return;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    tail = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int valu;

    cout << "Enter values for the list (-1 to stop):" << endl;
    while (true)
    {
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        create_list(head, tail, valu);
    }
    print_node_details(head);

    cout << "Deleting head..." << endl;
    delete_at_head(head);
    print_node_details(head);

    cout << "Deleting tail..." << endl;
    delete_at_tail(head, tail);
    print_node_details(head);

    cout << "Enter Position to delete: ";
    int ind;
    cin >> ind;
    delete_any_pos(head, ind);
    print_node_details(head);

    return 0;
}
