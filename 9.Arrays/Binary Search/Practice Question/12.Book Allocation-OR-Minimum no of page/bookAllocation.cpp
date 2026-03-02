#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int> arr, int mid, int m)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        pageSum = pageSum + arr[i];
        if (pageSum > mid)
        {
            studentCount++;
            pageSum = arr[i];
        }
    }
    return studentCount <= m;
}
int findMinMaxPage(vector<int> arr, int n, int m)
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
        if (isPossible(arr, mid, m))
        {
            ans = mid; // if allocation possible store mid and check for smaller possible answer
            end = mid - 1;
        }
        else
        {
            // allocation not possible
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{12, 34, 67, 90};
    int n = 4;
    int m = 2;
    int minMaxPage = findMinMaxPage(arr, n, m);
    cout << "Minimum maximum page => " << minMaxPage;
    return 0;
}