#include <vector>
#include <iostream>
using namespace std;
int binarySearch(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
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
    vector<int> arr{2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int target;
    cout << "Enter the target Element => ";
    cin >> target;
    int indexOfTarget = binarySearch(arr, target);
    if (indexOfTarget == -1)
    {
        cout << target << " not Found!";
    }
    else
    {
        cout << target << " Found at index " << indexOfTarget;
    }

    return 0;
}