#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 10, 14, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

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
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (!found)
        cout << "Element not found" << endl;

    return 0;
}
