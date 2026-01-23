#include <iostream>
using namespace std;
int findMaximum(int arr[], int size)
{
    int max = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size = 10;
    int arr[10] = {71, 62, 82, 94, 60, 53, 17, 6, 5, 34};
    int maxi = findMaximum(arr, size);
    cout << "Maximum element in array: " << maxi;
    return 0;
}