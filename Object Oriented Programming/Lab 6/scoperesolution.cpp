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
        base::a = 10; 
    }
};

class derived2 : virtual public base 
{
public:
    void setA2()
    {
        base::a = 20; 
    }
};

class derived3 : public derived1, public derived2
{
public:
    void display()
    {
        cout << "Value of A is: " << base::a << endl;
    }
};

int main()
{
    derived3 d;
    d.derived1::setA1();
    d.display();
    
    d.derived2::setA2(); 
    d.display();
    
    return 0;
}
