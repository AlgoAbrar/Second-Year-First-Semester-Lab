#include <bits/stdc++.h>
using namespace std;
//Bismillah
class bank
{
public:
    string accountname;
    long long accountnumber;
    long long balance;

    void display()
    {
        cout << "Account Number: " << accountnumber << endl;
        cout << "Account Name: " << accountname << endl;
        cout << "Balance: " << balance << endl;
    }
    void withdraw(long long amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Successful Withdrawal of " << amount << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }
    void deposit(long long amount)
    {
        balance += amount;
        cout << "Successful Deposit of " << amount << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    bank s1;

    cout << "Enter account name, account number, and initial balance: " << endl;
    cin >> s1.accountname >> s1.accountnumber >> s1.balance;

    s1.display();

    cout << "Do you want to deposit or withdraw? (D/W): ";
    char c;
    cin >> c;

    if (c == 'd' || c == 'D')
    {
        cout << "Enter amount to deposit: ";
        long long money;
        cin >> money;
        s1.deposit(money);
        s1.display();
    }
    else if (c == 'w' || c == 'W')
    {
        cout << "Enter amount to withdraw: ";
        long long money;
        cin >> money;
        s1.withdraw(money);
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
    // Alhamdulillah
}
