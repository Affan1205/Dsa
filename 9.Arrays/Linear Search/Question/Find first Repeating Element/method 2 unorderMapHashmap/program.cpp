#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void findFirstRepeating(vector<int> &arr)
{
    int hashSize = arr.size();
    vector<int> hash(hashSize, 0);
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < hash.size(); i++)
    {
        if (hash[i] > 1)
        {
            cout << i;
            break;
        }
    }
}
int main()
{
    vector<int> arr{1, 3, 4, 5, 4, 3};
    findFirstRepeating(arr);
    return 0;
}