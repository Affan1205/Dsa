#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
bool isPossible(vector<int> &position, int mid, int m)
{
    int ballCount = 1;
    int ballPosition = position[0]; // last position of ball
    for (int i = 1; i < position.size(); i++)
    {
        if (position[i] - ballPosition >= mid)
        {
            ballCount++;
            ballPosition = position[i];
        }
    }
    return ballCount >= m;
}
int findMaxMinMagneticForce(vector<int> &position, int m)
{
    sort(position.begin(), position.end());
    int start = 1;
    int end = position[position.size() - 1] - position[0];
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(position, mid, m))
        {
            // if we can distribute m ball to n baskets so we have to find the bigger answer
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> position{1, 2, 3, 4, 7};
    int m = 3;
    // vector<int> position{5, 4, 3, 2, 1, 1000000000};
    // int m = 2;
    int maxMinMagneticForce = findMaxMinMagneticForce(position, m);
    cout << "magnetic force between two balls = > " << maxMinMagneticForce;
    return 0;
}