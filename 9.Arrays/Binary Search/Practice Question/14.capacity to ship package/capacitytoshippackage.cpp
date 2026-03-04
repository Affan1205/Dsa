#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int> arr, int mid, int days)
{
    int dayCount = 1;
    int packageWeightSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        packageWeightSum = packageWeightSum + arr[i];
        if (packageWeightSum > mid)
        {
            dayCount++;
            packageWeightSum = arr[i];
        }
    }
    return dayCount <= days;
}
int findMincapacitytoship(vector<int> arr, int days)
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
        if (isPossible(arr, mid, days))
        {
            ans = mid; // store ans and find lesser ans
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
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int days = 5;
    int result = findMincapacitytoship(arr, days);
    cout << "Minimum Max capcity to ship all package => " << result;
    return 0;
}