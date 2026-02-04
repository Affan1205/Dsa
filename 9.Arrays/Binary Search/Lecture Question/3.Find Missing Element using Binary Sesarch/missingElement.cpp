#include <iostream>
#include <vector>
using namespace std;
int findMissingElement(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    if (arr[0] != 1)
    {
        return 1;
    }
    if (arr[arr.size() - 1] != arr.size() + 1)
    {
        return arr.size() + 1;
    }
    while (start <= end)
    {
        // search in right because till mid the indexes difference is 1 (no-change).
        if ((arr[mid] - mid == 1))
        {
            start = mid + 1;
        }
        // search in left because index and element difference become 2.
        else if ((arr[mid] - mid != 1))
        {
            ans = mid; // may be indexes start change from current mid
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans + 1; // we returning missing element.
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 7, 8, 9, 10};
    int missingElement = findMissingElement(arr);
    cout << "Missing Element => " << missingElement << endl;
    return 0;
}