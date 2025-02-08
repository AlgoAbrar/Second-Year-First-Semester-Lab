#include <bits/stdc++.h>
using namespace std;
// Problem 2:Check if a number is prime or not
// bismillah
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == 0 || n == 1 || n==2)
        cout << "Not prime";
    else
    {
        int i;
        // while(i*i<=n)
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                cout << "Not prime";
            else
                i++;
        }
        cout << "Prime number";
    }
    // alhamdulillah
}