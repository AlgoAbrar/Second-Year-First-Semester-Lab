#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A show function" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Class B show function" << endl;
    }
};

class C : public A, public B
{
    // public:
    //     void show()
    //     {
    //         A::show();
    //         B::show();
    //     }
};

int main()
{
    C j;
    j.show();
    return 0;
}
