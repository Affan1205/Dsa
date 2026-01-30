#include <iostream>
#include <vector>
using namespace std;
int findDuplicate(vector<int> arr)
{
    vector<int> hash(5, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > 1)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3, 4, 4, 2};

    int result = findDuplicate(arr);
    cout << "Duplicate in given vector is: " << result;
    return 0;
}