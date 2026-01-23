#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int size1 = 5;
    int arr1[5] = {69, 9, 15, 40, 82};
    int size2 = 7;
    int arr2[7] = {9, 76, 82, 71, 69, 53, 68};
    vector<int> ans;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr2[j] == INT32_MIN;
                ans.push_back(arr1[i]);
            }
        }
    }
    //printing intersection of array
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
    
    return 0;
}