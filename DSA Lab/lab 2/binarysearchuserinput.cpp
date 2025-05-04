#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int left = 0, right = n - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }

        if (arr[mid] < target)
            left = mid + 1; // Search right half
        else
            right = mid - 1; // Search left half
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
