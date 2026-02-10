#include <iostream>
#include <vector>
using namespace std;
int findTarget(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target )
        {
            return mid;
        }
        else if (arr[mid + 1] == target)
        {
            return mid + 1;
        }
        else if (arr[mid - 1] == target)
        {
            return mid - 1;
        }

        else if (target > arr[mid])
        {
            start = mid + 2;
        }
        else if (target < arr[mid])
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 40;
    int result = findTarget(arr, target);
    if (result == -1)
    {
        cout << target << " not found!!!";
    }
    else
    {
        cout << target << " found at " << result;
    }

    return 0;
}