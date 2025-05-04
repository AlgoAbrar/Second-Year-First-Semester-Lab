#include <bits/stdc++.h>
using namespace std;
//bismillah
//delete element from any position
int main()
{
    int arr[100], n,p;
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
    cin >> p;
    if (p < 0 || p >= n)
    {
        cout << "Invalid" << endl;
    }
    else
    {
        for (int i = p-1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    cout << "after deleting ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
    //alhamdulillah
}
