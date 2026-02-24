#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPossible(vector<int> &dist, int mid, double hour)
{
    double totaltime = 0;
    // ceil of all number except last distance
    for (int i = 0; i < dist.size() - 1; i++)
    {
        totaltime = totaltime + ((dist[i] + mid - 1) / mid);
    }
    // Because:

    // After last train → journey ends.There is no next departure time constraint.So no waiting.
    // that's why we do not have to wait.
    totaltime = totaltime + dist[dist.size() - 1] / mid;
    return totaltime <= hour;
}
int findMinSpeed(vector<int> &dist, double hour)
{
    int start = 1;
    int end = pow(10, 7);
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(dist, mid, hour))
        {
            ans = mid;     // valid ans checking left is any other minimum speed present <= hour
            end = mid - 1; // we want minimum speed <= hours
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
    vector<int> dist{1, 3, 2};
    double hour = 1.9;
    int minimumSpeed = findMinSpeed(dist, hour);
    cout << "Minimum Speed => " << minimumSpeed << endl;
    return 0;
}