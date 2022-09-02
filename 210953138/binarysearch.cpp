#include <iostream>
using namespace std;

// A iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1
int binarySearch(int arr[], int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        
        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, target);
    if (result == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Element is present at index " << result;
    }
    return 0;
}