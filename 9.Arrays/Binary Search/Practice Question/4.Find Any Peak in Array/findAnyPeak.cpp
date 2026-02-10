#include <iostream>
#include <vector>
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
            // we were on increasing slope so peak in on right side
            //  search in right
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            // it mean we were on decreasing slope and peak in on left
            //  or where we are standing slope is decreasing(i.e may be peak)
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}
int main()
{
    vector<int> arr{1, 2, 1, 3, 5, 6, 4};
    int peakIndex = findPeakIndex(arr);
    cout << "Peak Index => " << peakIndex << endl;
    return 0;
}