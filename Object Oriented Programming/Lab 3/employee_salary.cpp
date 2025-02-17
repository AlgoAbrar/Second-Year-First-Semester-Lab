#include <bits/stdc++.h>
using namespace std;
// bismillah
class Set
{
    int id, salary;

public:
    void input(void);
    void display(void);

private:
    void largest(void);
};
void Set ::largest()
{
    if (salary >= 80000)
        cout << "Higher Class" << endl;
    else if (salary < 80000 && salary >= 20000)
        cout << "Middle Class" << endl;
    else
        cout << "Lower Class" << endl;
}
void Set::input(void)
{

    cin >> id >> salary;
}
void Set::display()
{
    largest();
}

int main()
{
    int n;
    cin >> n;
    Set A[n];
    cout << "Id and Salary" << endl;
    for (int i = 0; i < n; i++)
    {

        A[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Person " << i + 1 << " is ";
        A[i].display();
    }
    return 0;
    // alhamdulillah
}