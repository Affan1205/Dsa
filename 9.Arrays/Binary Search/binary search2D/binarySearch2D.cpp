#include <vector>
#include <iostream>
using namespace std;
int binarySearch(vector<vector<int>> arr, int target)
{
    int row = arr.size();
    int col = arr[0].size();
    int start = 0;
    int end = (row * col) - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int rowIndex = mid / col;
        int colIndex = mid % col;
        if (arr[rowIndex][colIndex] == target)
        {
            return mid;
        }
        else if (target > arr[rowIndex][colIndex])
        {
            start = mid + 1;
        }
        else if (target < arr[rowIndex][colIndex])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
    int target = 11;
    int targetIndex = binarySearch(arr, target);
    if (targetIndex == -1)
    {
        cout << "Target Not Found!!";
    }
    else
    {
        cout << "Target Found at index => " << targetIndex << endl;
    }

    return 0;
}