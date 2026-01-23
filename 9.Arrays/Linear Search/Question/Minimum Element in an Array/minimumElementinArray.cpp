#include <iostream>
using namespace std;
int findMinimum(int arr[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int size = 10;
    int arr[10] = {91, 27, 63, 37, 49, 50, 96, 82, 9, 4};
    int min = findMinimum(arr, size);
    cout << "Minimum element in array = " << min << endl;
    return 0;
}