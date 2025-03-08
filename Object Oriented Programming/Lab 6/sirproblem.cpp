#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    int a;
};

class derived1 : virtual public base  
{
public:
    void setA1()
    {
        a = 10;
    }
};

class derived2 : virtual public base 
{
public:
    void setA2()
    {
        a = 20;
    }
};

class derived3 : public derived1, public derived2
{
public:
    void display()
    {
        cout << "Value of A is: " << a << endl;
    }
};

int main()
{
    derived3 d;
    d.setA1();
    d.display();
    
    d.setA2(); 
    d.display();
    
    return 0;
}
