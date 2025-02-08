#include <bits/stdc++.h>
using namespace std;
// bismillah
class bank
{
public:
    string accountname;
    int accountnumber;
    string department;
    float balance;
    void getdata(string a, int b, string d, float g)
    {
        accountname = a;
        accountnumber = b;
        department = d;
        balance = g;
    }
    void display()
    {
        cout << accountname << " " << accountnumber;
        cout << " " << department << " " << balance << endl;
    }
    void scholarship(float y)
    {
        balance = y;
        if (balance >= 3.5)
            cout << "Eligible" << endl
                 << endl;
        else
            cout << "Not Eligible" << endl << endl;
    }
};
int main()
{
    int n;
    cin >> n;
    bank s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].accountname >> s[i].accountnumber >> s[i].department >> s[i].balance;
    }
    cout << endl << "Student Details and Eligibility" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].getdata(s[i].accountname, s[i].accountnumber, s[i].department, s[i].balance);
        s[i].display();
        s[i].scholarship(s[i].balance);
    }
    return 0;
    // alhamdulillah
}