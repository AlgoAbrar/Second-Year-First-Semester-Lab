#include <bits/stdc++.h>
using namespace std;
// update even position of array
int main()
{
    int arr[100], n, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    for (int i = 0; i < n; i += 2)
    {
        if (i % 2 == 0)
        {
            cin >> x;
       arr[i] = x;
        }
    }

    cout << "Array after filling: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}