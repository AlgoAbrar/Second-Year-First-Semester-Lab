#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int val;
    node* next;
};

int main()
{
    node a,b,c;
    a.val=10;
    b.val=20;
    c.val=30;

    a.next=&b;
    b.next=&c;
    c.next=NULL;

    cout<<a.val<<" "<<b.val<<" "<<c.val<<endl;
    cout<<a.next<<" "<<b.next<<" "<<c.next<<endl;

    
    return 0;
}