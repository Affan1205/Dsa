#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
bool isPossible(vector<int> &piles, int mid, int h)
{
    int time = 0;
    for (int i = 0; i < piles.size(); i++)
    {
        time = time + (piles[i] + mid - 1) / mid;
    }
    return time <= h;
}
int findMinimumEatingSpeed(vector<int> &piles, int h)
{
    int max = INT32_MIN;
    for (int i = 0; i < piles.size(); i++)
    {
        if (piles[i] > max)
        {
            max = piles[i];
        }
    }
    // we have eat each pile in 1 hour only be possible if we eat at max speed(i.e maximum in array)
    if (h == piles.size())
    {
        return max;
    }
    int start = 1;
    int end = max;
    int mid = start + (end - start) / 2;
    int minSpeed = -1;
    while (start <= end)
    {
        if (isPossible(piles, mid, h))
        {
            // valid ans but to find minumum speed we have to search in left if any lesser speed is also take time <= hours
            minSpeed = mid;
            end = mid - 1;
        }
        else
        {
            // we have to search in right because speed is slow here and to eat faster we have to right
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return minSpeed;
}
int main()
{
    vector<int> piles{3, 6, 7, 11};
    int hours = 8;
    int minimumSpeed = findMinimumEatingSpeed(piles, hours);
    cout << "Minimum Eating Speed => " << minimumSpeed;
    return 0;
}