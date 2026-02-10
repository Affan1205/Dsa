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
            // mid in left sorted part to find smallest element we have to search in right sorted part
            start = mid + 1;
        }
        else if (arr[mid] < arr[0])
        {
            // mid in right sorted part but for smallest element we have to search in left
            // but what if our current mid is the point from where right sorted part start therefor mid can be peak
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    vector<int> arr{3, 4, 5, 1, 2};
    int pivot = findPivot(arr);
    cout << "Smallest Element => " << arr[pivot] << endl;
    return 0;
}