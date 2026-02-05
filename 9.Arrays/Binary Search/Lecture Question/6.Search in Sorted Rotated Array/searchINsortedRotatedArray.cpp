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
            // search in right part
            start = mid + 1;
        }
        else
        {
            // search in left part but pivot may be mid so (do not miss mid)
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int binarySearch(vector<int> arr, int start, int end, int target)
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
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{8, 10, 12, 14, 3, 5, 7};
    int pivot = findPivot(arr);
    int target = 12;
    int ans;
    if (target >= arr[pivot] && target <= arr[arr.size() - 1])
    {
        ans = binarySearch(arr, pivot, arr.size() - 1, target);
        cout << "Target found at : " << ans;
    }
    else
    {
        ans = binarySearch(arr, 0, pivot - 1, target);
        cout << "Target found at : " << ans;
    }

    return 0;
}