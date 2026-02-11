// Given a sorted array of integers and a target value, find the floor of the target.
// 👉Floor = the greatest element in the array that is less than or equal to the target.
// If no such element exists, return -1.
// Example 1:
// Input:
// arr = [1, 2, 4, 6, 10, 12, 14]
// target = 7
// Output:
// 6
// Explanation:
// 6 is the greatest element ≤ 7.
// Example 2
// Input:
// arr = [1, 2, 4, 6, 10]
// target = 0
// Output:
// -1
// Explanation:
// No element ≤ 0 exists.
#include <vector>
#include <iostream>
using namespace std;
int findFloorIndex(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            // store ans because mid can be a valid floor candidate
            ans = mid;
            start = mid + 1; // search in right to find if any other floor candidate on right
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, 5, 7, 11, 13};
    int target = 8;
    int floorIndex = findFloorIndex(arr, target);
    if (floorIndex == -1)
    {
        cout << "Not Found!!!";
    }
    else
    {
        cout << "Floor Index => " << floorIndex << endl;
    }

    return 0;
}