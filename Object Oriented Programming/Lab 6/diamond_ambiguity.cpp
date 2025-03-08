#include <iostream>
using namespace std;

class Person
{
public:
    void display()
    {
        cout << "Person details displayed." << endl;
    }
};

class Manager : public Person
{
};

class Worker : public Person
{
};

class Employee : public Manager, public Worker
{
};

int main()
{
    Employee emp;
    emp.display();
    return 0;
}

// solve
/*
#include <iostream>
using namespace std;

class Person {
public:
    void display() {
        cout << "Person details displayed." << endl;
    }
};

class Manager : virtual public Person {
};

class Worker : virtual public Person {
};


class Employee : public Manager, public Worker {
};

int main() {
    Employee emp;
    emp.display(); 
    return 0;
}
*/
