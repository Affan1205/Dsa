#include <vector>
#include <iostream>
using namespace std;
int findCeilIndex(vector<int> arr, int target)
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
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{2, 4, 6, 10, 12, 14, 16};
    int target = 13;
    int ceilIndex = findCeilIndex(arr, target);
    if (ceilIndex == -1)
    {
        cout << "Not found!!!" << endl;
    }
    else
    {
        cout << "Ceil Index => " << ceilIndex << endl;
    }

    return 0;
}