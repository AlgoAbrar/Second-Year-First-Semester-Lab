#include <bits/stdc++.h>
using namespace std;
//bismillah
// delete element from the beginning of array
int main()
{
    int arr[100], n;
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
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deleting ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
    //alhamdulillah
}
