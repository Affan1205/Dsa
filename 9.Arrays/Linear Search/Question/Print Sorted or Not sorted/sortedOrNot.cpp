#include <iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    int i = 0;
    while (i < size-1)
    {
        if (arr[i] < arr[i + 1])
        {
            i++;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int size = 7;
    int arr[7] = {23, 34, 45, 54, 67, 78, 89};
    if (isSorted(arr, size))
    {
        cout << "Yes! Array is sorted.";
    }
    else
    {
        cout << "No Array is not sorted.";
    }

    return 0;
}