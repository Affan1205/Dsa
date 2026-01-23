#include <iostream>
#include <vector>
using namespace std;
int findUnique(vector<int> arr)
{
    int ans = 0 ;
    for (int i = 0; i <arr.size(); i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size = ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int ans = findUnique(arr);
    cout << "Unique element is = " << ans << endl;

    return 0;
}