#include <iostream>
using namespace std;
void printReverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size = 9;
    int arr[9] = {60, 36, 5, 6, 16, 12, 13, 43, 96};
    printReverseArray(arr, size);
    return 0;
}