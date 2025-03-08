// military inheritance
#include <bits/stdc++.h>
using namespace std;

class MilitaryUnit
{
public:
    int solider = 100;
    float salary = 1000;
    void calculate_salary()
    {
        cout << "Salary of Military Unit " << salary * solider << endl;
    }
};
class admin
{
public:
    int adminnum = 50;
    float salary = 1000;
    void calculate_salary()
    {
        cout << "Salary of Admin " << salary * adminnum << endl;
    }
};
class cantonment : public MilitaryUnit, public admin
{
public:
    void calculate_salary()
    {
        MilitaryUnit::calculate_salary();
        admin::calculate_salary();
    }
};
int main()
{
    cantonment c;
    c.calculate_salary();
    return 0;
}
