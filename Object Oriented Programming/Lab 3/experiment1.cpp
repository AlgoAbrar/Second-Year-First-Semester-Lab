#include <bits/stdc++.h>
using namespace std;
// bismillah
class Set
{
    int m, n;

public:
    void input(void);
    void display(void);

private:
    void largest(void);
};
void Set ::largest()
{
    if (m >= n)
        cout << "Largest value= " << m << endl;
    else
        cout << "Largest value= " << n << endl;
}
void Set::input(void)
{
    cout << "Input values of m and n" << endl;
    cin >> m >> n;
}
void Set::display()
{
    largest();
}

int main()
{
    int n;
    cin>> n;
    Set A[n];
    for (int i = 0;i < n; i++)
    {
        A[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        A[i].display();
    }
    return 0;
    // alhamdulillah
}