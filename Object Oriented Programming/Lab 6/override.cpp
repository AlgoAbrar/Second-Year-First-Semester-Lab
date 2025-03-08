#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int a;
    virtual void display() = 0;
};

class derived1 : virtual public base 
{
public:
    void display() override
    {
        a = 10;
        cout << "Derived1 sets a = " << a << endl;
    }
};

class derived2 : virtual public base 
{
public:
    void display() override
    {
        a = 20;
        cout << "Derived2 sets a = " << a << endl;
    }
};

class derived3 : public derived1, public derived2
{
public:
    void display() override
    {
        derived1::display();
        derived2::display();
        cout << "Final Value of A in derived3: " << a << endl;
    }
};

int main()
{
    derived3 d;
    d.display();
    return 0;
}
