#include <iostream>
#include <vector>
using namespace std;
bool isPossible(vector<int> tree, int mid, int m)
{
    int remainingWood = 0;
    for (int i = 0; i < tree.size(); i++)
    {
        if (mid > tree[i])
        {
            continue;
        }
        else
        {
            remainingWood = remainingWood + tree[i] - mid;
            if (remainingWood >= m)
            {
                return remainingWood >= m;
            }
        }
    }
    return false;
}
int findMaxminheightofBlade(vector<int> tree, int m)
{
    int max = INT32_MIN;
    for (int i = 0; i < tree.size(); i++)
    {
        if (tree[i] > max)
        {
            max = tree[i];
        }
    }
    int start = 1;
    int end = max;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(tree, mid, m))
        {
            ans = mid;
            start = mid + 1; // we want to maximum answer
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
    vector<int> tree{20, 15, 10, 17};
    int m = 7; // required wood
    int ans = findMaxminheightofBlade(tree, m);
    cout << "Answer is => " << ans;
    return 0;
}