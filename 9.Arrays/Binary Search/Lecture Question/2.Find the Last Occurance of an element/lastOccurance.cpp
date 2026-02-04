#include <vector>
#include <iostream>
using namespace std;
int lastOccurance(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store ans and search in right for last occurance
            ans = mid;
            start = mid + 1;
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
    vector<int> arr{1, 4, 5, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9, 10};
    int target = 7;
    int indexOfLastOccurance = lastOccurance(arr, target);
    if (indexOfLastOccurance == -1)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "Last Occurance of " << target << " is at index : " << indexOfLastOccurance << endl;
    }

    return 0;
}