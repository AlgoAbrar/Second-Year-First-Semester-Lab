#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Department
{
public:
    string deptName;

    void display()
    {
        cout << "Department: " << deptName << endl;
    }
};

class Employee : public Person, public Department
{
    
};

int main()
{
    Employee emp;
    emp.name = "Saiyedul Abrar";
    emp.age = 19;
    emp.deptName = "Computer Science";

    emp.display();
    return 0;
}

// solve
/*
#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void showDetails() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};


class Department {
public:
    string deptName;

    void showDetails() {
        cout << "Department: " << deptName << endl;
    }
};


class Employee : public Person, public Department {
public:
    void showDetails() {
        Person::showDetails();
        Department::showDetails();
    }
};

int main() {
    Employee emp;
    emp.name = "Saiyedul Abrar";
    emp.age = 19;
    emp.deptName = "Computer Science";

    emp.showDetails();
    return 0;
}

*/
