#include <iostream>
#include <vector>
using namespace std;
void sortZeroOne(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    while (start <= end)
    {
        if (arr[start] == 1 && arr[end] == 0)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        else
        {
            if (arr[start] == 0)
            {
                start++;
            }
            else if (arr[end]==1)
            {
                end--;
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
       cout << arr[i] << " ";
    }
    
}
int main()
{
    vector<int> arr{0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    sortZeroOne(arr);
    return 0;
}