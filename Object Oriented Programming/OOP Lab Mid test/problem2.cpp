#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    float salary;

    float calculateBonus()
    {
        return salary * (10.0 / 100);
    }

public:
    Employee(string nm = "", int idd = 0, float salry = 0.0)
    {
        name = nm;
        id = idd;
        salary = salry;
    }

    void setData()
    {
        cout << "Enter Name, ID, and Salary: ";
        getline(cin, name);
        cin >> id >> salary;
    }

    void displayData()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Salary: $" << salary << endl;
    }

    void showBonus();
};

void Employee::showBonus()
{
    cout << "Bonus: $" << calculateBonus() << endl;
}

int main()
{
    int n;
    cin >> n;

    Employee *staff = new Employee[n];

    for (int i = 0; i < n; i++)
    {
        staff[i].setData();
    }

    for (int i = 0; i < n; i++)
    {
        staff[i].displayData();
        staff[i].showBonus();
        cout << endl;
    }

    return 0;
}
