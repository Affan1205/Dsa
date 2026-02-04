#include <iostream>
#include <vector>
using namespace std;
int firstOccurance(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int main()
{
    vector<int> arr{1, 4, 5, 7, 7, 7, 7, 7, 8, 9, 10};
    int target = 7;
    int indexOfFirstOccurance = firstOccurance(arr, target);
    if (indexOfFirstOccurance == -1)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "First Occurand of " << target << " is at index : " << indexOfFirstOccurance << endl;
    }

    return 0;
}