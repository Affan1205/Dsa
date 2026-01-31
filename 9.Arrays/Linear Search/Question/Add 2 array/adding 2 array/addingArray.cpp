#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void addVectors(vector<int> arr, vector<int> brr)
{
    vector<int> ans;
    int carry = 0;
    int i = arr.size() - 1;
    int j = brr.size() - 1;
    while (i >= 0 && j >= 0) // When both array have same size
    {
        int add = arr[i] + brr[j] + carry;
        int digit = add % 10;
        ans.push_back(digit);
        carry = add / 10;
        i--;
        j--;
    }
    // when arr 1 size is larger
    while (i >= 0)
    {
        int add = arr[i] + 0 + carry;
        int digit = add % 10;
        ans.push_back(digit);
        carry = add / 10;
        i--;
    }
    // when arr 2 size is larger
    while (j >= 0)
    {
        int add = 0 + brr[j] + carry;
        int digit = add % 10;
        ans.push_back(digit);
        carry = add / 10;
        j--;
    }
    // agar carry bach gaya ha
    if (carry)
    {
        ans.push_back(carry);
    }
    // yeh hum isliye kr rahe hn taki jab hum reverse karenge toh peeche wale 0 aage aajayenge jiska koi use nahi
    while (ans[ans.size() - 1] == 0)
    {
        ans.pop_back();
    }
    // reversing the vector because we push back value from behind
    reverse(ans.begin(), ans.end());
    // printing the vector
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<int> arr{2, 4, 6, 8, 10};
    vector<int> brr{1, 7, 3};
    addVectors(arr, brr);
    return 0;
}