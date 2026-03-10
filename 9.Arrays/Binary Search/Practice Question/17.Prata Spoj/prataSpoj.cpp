#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int> cooks, int mid, int prata)
{
    int prataCount = 0;
    for (int i = 0; i < cooks.size(); i++)
    {
        int j = 1;
        int mintime = mid;
        while (true)
        {
            if (cooks[i] * j <= mintime)
            {
                prataCount++;
                mintime = mintime - cooks[i] * j;
                j++;
            }
            else
            {
                break;
            }
        }
    }
    return prataCount >= prata;
}
int findMinmaxtime(vector<int> cooks, int prata)
{
    int start = 1;
    int max = INT32_MIN;
    for (int i = 0; i < cooks.size(); i++)
    {
        if (cooks[i] > max)
        {
            max = cooks[i];
        }
    }
    int end = max * (prata * (prata + 1) / 2); // most inefficent cook
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(cooks, mid, prata))
        {
            ans = mid;
            end = mid - 1; // for minimum answer
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
    vector<int> cooks{1, 2, 3, 4};
    int prata = 10;
    int ans = findMinmaxtime(cooks, prata);
    cout << "Minimum time to get order prata => " << ans;
    return 0;
}