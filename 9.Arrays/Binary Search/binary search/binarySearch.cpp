#include <vector>
#include <iostream>
using namespace std;
int binarySearch(vector<int> arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2; // taki integer overflow na hojaye
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid]) // search in right
        {
            start = mid + 1;
        }
        else if (target < arr[mid]) // search in left
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1; // if target not found!
}
int main()
{
    vector<int> arr{-1, 0, 3, 17, 34, 62, 75, 90, 112};
    int targetElement = 62;
    int indexOfTargetElement = binarySearch(arr, targetElement);
    if (indexOfTargetElement == -1)
    {
        cout << "Element Not found !!!";
    }
    else
    {
        cout << "Element found at index : " << indexOfTargetElement << endl;
    }

    return 0;
}