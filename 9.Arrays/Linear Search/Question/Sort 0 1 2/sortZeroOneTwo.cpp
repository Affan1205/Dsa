#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void sortZeroOneTwo(vector<int> arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size()-1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        { // if mid == 2
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    printVector(arr);
}
int main()
{
    vector<int> arr{0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    sortZeroOneTwo(arr);
    return 0;
}