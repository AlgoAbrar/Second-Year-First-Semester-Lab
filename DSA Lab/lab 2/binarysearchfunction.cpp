#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (arr[mid] == target)
        return mid;
    if (arr[mid] < target)
        return binarySearch(arr, mid + 1, right, target);
    return binarySearch(arr, left, mid - 1, target);
}

int main()
{
    int n, target;

    cout << "number of elements: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "value to search: ";
    cin >> target;

    sort(arr, arr + n);

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1)
        cout << "found at  " << result <<" index"<< endl;
    else
        cout << "not found" << endl;

    return 0;
}
