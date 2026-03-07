#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> stalls, int mid, int k)
{
    int cowCount = 1;
    int pos = stalls[0]; // pos => last position of cow
    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            cowCount++;
            pos = stalls[i];
        }
    }
    return cowCount >= k;
}
int findMaxMinDistancebtwCows(vector<int> stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int start = 1;
    // in worst case we have two cows and we place first cow in first stall and second cow
    // in last stall
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(stalls, mid, k))
        {
            // if we can assign stalls to k cows with mid (min distance) then
            // we have to check of greater mid because we are finding maximum minimum distance between two cows.
            ans = mid;
            start = mid + 1;
        }
        else
        {
            // here we cannot assign k cows to stalls
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> stalls{1, 2, 4, 8, 9};
    // vector<int> stalls{10,1, 1, 2, 7, 5};
    int k = 3;
    int maxMinDistancebtwCows = findMaxMinDistancebtwCows(stalls, k);
    cout << "Maximum Minimum Distance between two cows => " << maxMinDistancebtwCows;
    return 0;
}