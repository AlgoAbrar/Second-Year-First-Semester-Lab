#include <bits/stdc++.h>
using namespace std;

class Account
{
public:
    string cname;
    int accnum;
    double balance;

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposit of " << amount << " successful! New balance: " << balance << endl;
    }

    void disblance()
    {
        cout << "Account Holder: " << cname << endl;
        cout << "Account Number: " << accnum << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
public:
    double intrate;

    void savacc(string name, int acc_no, double bal, double rate)
    {
        cname = name;
        accnum = acc_no;
        balance = bal;
        intrate = rate;
    }

    void compint()
    {
        double interest = balance * (intrate / 100);
        balance += interest;
        cout << "Interest of " << interest << " added. New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds! Withdrawal failed." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful! Remaining balance: " << balance << endl;
        }
    }
};

class CurrentAccount : public Account
{
public:
    double minibalance;
    double srvchrg;

    void curacc(string name, int acc_no, double bal, double min_bal, double charge)
    {
        cname = name;
        accnum = acc_no;
        balance = bal;
        minibalance = min_bal;
        srvchrg = charge;
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds! Withdrawal failed." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal of " << amount << " successful!" << endl;
            if (balance < minibalance)
            {
                balance -= srvchrg;
                cout << "Balance below minimum! Service charge of " << srvchrg << " applied." << endl;
            }
            cout << "New balance: " << balance << endl;
        }
    }
};

int main()
{
    SavingsAccount sav_acct;
    CurrentAccount cur_acct;

    sav_acct.savacc("John Doe", 101, 5000, 5.0);
    cur_acct.curacc("Jane Smith", 102, 3000, 1000, 50);

    cout << "Savings Account" << endl;
    sav_acct.deposit(1000);
    sav_acct.compint();
    sav_acct.disblance();
    sav_acct.withdraw(2000);
    sav_acct.disblance();

    cout << "Current Account" << endl;
    cur_acct.deposit(2000);
    cur_acct.disblance();
    cur_acct.withdraw(3500);
    cur_acct.disblance();

    return 0;
}
