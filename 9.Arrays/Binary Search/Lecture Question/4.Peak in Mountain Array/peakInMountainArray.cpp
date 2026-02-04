#include <vector>
#include <iostream>
using namespace std;
int findPeakIndex(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        { // search in right part
            start = mid + 1;
        }
        else
        { // either mid is peak or we are at any increasing index
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    vector<int> arr{1, 3, 4, 5, 7, 6, 2};
    int peakIndex = findPeakIndex(arr);
    cout << "Peak Index of Mountain Array : " << findPeakIndex(arr);
    return 0;
}