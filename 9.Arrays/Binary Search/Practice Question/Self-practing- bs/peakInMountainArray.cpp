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
        {
            start = mid + 1;
        }
        else // if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    vector<int> arr{2, 4, 6, 8, 14, 13, 12, 11, 9};
    int peakIndex = findPeakIndex(arr);
    cout << "Peak Index in Mountain Array => " << peakIndex << endl;
    return 0;
}