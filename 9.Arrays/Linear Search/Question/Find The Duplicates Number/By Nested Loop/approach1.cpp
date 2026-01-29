#include <iostream>
#include <vector>
using namespace std;
int findDuplicates(vector<int> arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 2)
        {
            return arr[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 3};
    int result = findDuplicates(arr);
    cout << "Duplicate Number in given vector: " << result;
    return 0;
}