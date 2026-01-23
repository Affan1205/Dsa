#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int size1 = 7;
    int arr1[7] = {1, 2, 3, 4, 7, 9, 8};
    int size2 = 5;
    int arr2[5] = {2, 4, 8, 9, 5};
    vector<int> ans;
    // fist humne intersection nikala taaki same number ko intmin assign kr sake
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] = INT32_MIN;
            }
        }
    }
    // now we do union
    // pushing all elements of arr1 to ans vector
    for (int i = 0; i < size1; i++)
    {
        ans.push_back(arr1[i]);
    }
    // pushing all elements of arr2 to ans vector
    for (int i = 0; i < size2; i++)
    {
        ans.push_back(arr2[i]);
    }
    // printing the union by ans vector
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] != INT32_MIN)
        {
            cout << ans[i] << " " ;
        }
    }
    
    return 0;
}