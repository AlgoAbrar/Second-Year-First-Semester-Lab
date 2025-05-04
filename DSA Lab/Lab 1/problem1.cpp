#include <bits/stdc++.h>
using namespace std;
//bismillah
//insert element at beginning
int main()
{
    int arr[100], n, x;

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
    cout<< endl;

    cin >> x;
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    n++;
    cout << "Array after ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
    //alhamdulillah
}
