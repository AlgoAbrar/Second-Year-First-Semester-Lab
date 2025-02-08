#include <bits/stdc++.h>
using namespace std;
//bismillah
class bank{
public:
string accountname;
int accountnumber;
string department;
float balance;
void getdata(string a,int b, string d,float g)
{
    accountname=a;
    accountnumber=b;
    department=d;
    balance=g;
}
void display()
{
    cout<< accountname<<" "<<accountnumber<<" "<<department<<" "<<balance<<endl;
}
void scholarship(float y)
{
    balance=y;
    if(balance>=3.50)
    cout<<"Eligible"<<endl;
    else
    cout<<"Not Eligible"<<endl;
}

};

int main()
{
bank s1;
cin>> s1.accountname>> s1.accountnumber>>s1.department>>s1.balance;
s1.getdata(s1.accountname,s1.accountnumber,s1.department,s1.balance);
s1.display();
s1.scholarship(s1.balance);

     return 0;
//alhamdulillah
}