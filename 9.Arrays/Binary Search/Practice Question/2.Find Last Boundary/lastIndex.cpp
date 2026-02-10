// Find the last index such that
// arr[i] <= x
#include <vector>
#include <iostream>
using namespace std;
int findLastIndex(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] <= target)
        {
            /*Agar arr[mid] <= target,
            toh left side ke saare elements bhi ≤ target honge,
            isliye last index dhoondhne ke liye right side check karna chahiye.*/
            ans = mid;
            start = mid + 1; // we search for last index i.e arr[i]<=target
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
    vector<int> arr{1, 2, 4, 4, 4, 6, 8};
    int target = 5;
    int lastIndex = findLastIndex(arr, target);
    cout << lastIndex;
    return 0;
}