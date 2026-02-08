#include <vector>
#include <iostream>
using namespace std;
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int binarySearch(vector<int> &arr, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            // search in right
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            // search in left
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{5, 6, 7, 8, 2, 3, 4};
    int pivotIndex = findPivot(arr);
    cout << "Pivot Element index found at: " << pivotIndex << endl;
    int target = 3;
    int result = 0;
    if (target >= arr[pivotIndex] && target <= arr[arr.size() - 1])
    {
        result = binarySearch(arr, pivotIndex, arr.size() - 1, target);
        cout << "Element found at index: " << result;
    }
    else
    {
        result = binarySearch(arr, 0, pivotIndex - 1, target);
        cout << "Element found at index: " << result;
    }

    return 0;
}