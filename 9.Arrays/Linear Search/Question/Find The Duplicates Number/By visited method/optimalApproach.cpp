#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        // already visited ?
        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        // visited Mark
        arr[index] = arr[index] * (-1);
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, 4, 2, 2};
    int result = findDuplicate(arr);
    cout << "Duplicate in given vector : " << result << endl;
    return 0;
}