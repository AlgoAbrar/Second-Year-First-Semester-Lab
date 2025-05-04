#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    node a(10), b(20), c(30);
    a.next = &b;
    b.next = &c;
    cout << a.val << endl;
    cout << a.next->val << endl;
    cout << a.next->next->val << endl;
    return 0;
}
