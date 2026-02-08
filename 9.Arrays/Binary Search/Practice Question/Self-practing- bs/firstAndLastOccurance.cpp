#include <vector>
#include <iostream>
using namespace std;
int firstOccurance(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store mid and search left of first occurance as array is sorted smaller index lies on left side
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
int lastOccurance(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // store mid and search right for last occurance as array is sorted larger index lies on right side
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
    vector<int> arr{1, 3, 5, 5, 5, 5, 67, 123, 125};
    int target = 5;
    int firstIndexOfTarget = firstOccurance(arr, target);
    if (firstIndexOfTarget == -1)
    {
        cout << target << " not found!";
    }
    else
    {
        cout << "First Occurance of" << target << " is at index => " << firstIndexOfTarget << endl;
    }
    int lastIndexOfTarget = lastOccurance(arr, target);
    if (lastIndexOfTarget == -1)
    {
        cout << target << " not found!";
    }
    else
    {
        cout << "First Occurance of" << target << " is at index => " << lastIndexOfTarget << endl;
    }

    return 0;
}