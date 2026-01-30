#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findDuplicate(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{4, 3, 5, 2, 4, 1};
    int result = findDuplicate(arr);
    cout << "Duplicate in given vector : " << result << endl;
    return 0;
}