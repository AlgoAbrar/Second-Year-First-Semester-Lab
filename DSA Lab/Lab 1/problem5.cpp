#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100], n, x, p;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
    cin >> p >> x;

    if (p < 0 || p >= n)
    {
        cout << "Invalid!" << endl;
    }
    else
    {
        arr[p] = x;
    }


    cout << "Array after update: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}