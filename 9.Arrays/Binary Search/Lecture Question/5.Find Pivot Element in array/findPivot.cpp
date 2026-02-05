#include <vector>
#include <iostream>
using namespace std;
int findPivotIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            // search in right sorted part
            start = mid + 1;
        }
        else
        {
            // search in left but mid may pivot (usko miss mat krna)
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    vector<int> arr{4, 6, 8, 10, 1, 2, 3};
    int pivotIndex = findPivotIndex(arr);
    cout << "Pivot Index => " << pivotIndex << endl;
    return 0;
}