#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int> arr, int mid, int k)
{
    int painterCount = 1;
    int boardSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        boardSum = boardSum + arr[i];
        if (boardSum > mid)
        {
            painterCount++;
            boardSum = arr[i];
        }
    }
    return painterCount <= k;
}
int findMinMaxTimeToPaintBoard(vector<int> arr, int k)
{
    int max = INT32_MIN;
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int start = max;
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(arr, mid, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{5, 10, 30, 20, 15};
    int k = 3;
    int minMaxTimeToPaintBoard = findMinMaxTimeToPaintBoard(arr, k);
    cout << "Minimum Maximum time to paint all the board with k painters => " << minMaxTimeToPaintBoard;
    return 0;
}