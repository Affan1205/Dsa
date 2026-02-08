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
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    mid = start + (end - start) / 2;

    }
    return end;
}
int main()
{
    vector<int> arr{5, 6, 7, 8, 2, 3, 4};
    int pivotIndex = findPivot(arr);
    cout << "Pivot Element index found at: " << pivotIndex << endl;
    return 0;
}