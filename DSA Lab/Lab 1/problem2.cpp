#include <bits/stdc++.h>
using namespace std;
//bismillah
//insert at any position
int main()
{
    int arr[100], n, x, p;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Array ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    cout << "Enter element and position : ";
    cin >> x >> p;
    if (p < 0 || p > n)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int i = n; i > p-1; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[p-1] = x;
        n++;
    }
    cout << "Array after ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
    //alhamdulillah
}
