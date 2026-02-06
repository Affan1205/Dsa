// Given a sorted array and an integer x,
// find the index where x should be inserted so that array sorted hi rahe.
// 👉 Agar x already present ho, usi ka index return karo.
#include <iostream>
#include <vector>
using namespace std;
int findSortedIndex(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{
    vector<int> arr{1, 2, 4, 5, 7, 9};
    int target = 3;
    int sortedIndex = findSortedIndex(arr, target);
    cout << "Sorted Index => " << sortedIndex;
    return 0;
}