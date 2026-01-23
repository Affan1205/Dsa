#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size1 = 7;
    int arr1[7] = {9, 76, 82, 71, 64, 53, 68};
    int size2 = 5;
    int arr2[5] = {69, 9, 15, 40, 8};
    vector<int> ans;
    // pushing all elements to vector ans from arr1
    for (int i = 0; i < size1; i++)
    {
        ans.push_back(arr1[i]);
    }
    // pushing all elements to vector ans from arr2
    for (int i = 0; i < size2; i++)
    {
        ans.push_back(arr2[i]);
    }
    // printing vector ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}