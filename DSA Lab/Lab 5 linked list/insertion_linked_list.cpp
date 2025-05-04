#include <bits/stdc++.h>
using namespace std;

// Bismillah
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

void insert_at_tail(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void insert_any_position(Node *&head, int idx, int val)
{
    if (idx < 1 || head == NULL)
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
    for (int i = 1; i < idx - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
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

void insert_at_tails(Node *&head, Node *&tail, int val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int valu;
    while (1)
    {
        cin >> valu;
        if (valu == -1)
        {
            break;
        }
        insert_at_tails(head, tail, valu);
    }
    print_node_details(head);

    return 0;
    // Alhamdulillah
}
