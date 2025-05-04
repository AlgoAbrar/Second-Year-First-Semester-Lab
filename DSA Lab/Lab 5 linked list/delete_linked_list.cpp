#include <bits/stdc++.h>
using namespace std;
//bismillah
class Node
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void delete_at_head(Node *&head)
{
    Node *deletenode=head;
    head=head->next;
    delete deletenode;
}
void delete_any_pos(Node *&head,int ind)
{
    Node *temp=head;
    for(int i=1;i<ind;i++)
    {
        temp=temp->next;
    }
    Node *deleteNode=temp->next;
    temp->next=temp->next->next;
    delete deleteNode;
}
void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "empty!" << endl;
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
     create_list(head, tail, valu);
    }
    print_node_details(head);

    delete_at_head(head);
    print_node_details(head);

    delete_at_tail(head, tail);
    print_node_details(head);
cout<<"Enter Position to delete"<<endl;
int ind;
cin>>ind;
    delete_any_pos(head, ind);
    print_node_details(head);
     return 0;
//alhamdulillah
}