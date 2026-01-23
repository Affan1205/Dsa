#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int arr[7] = {85, 30, 60, 78, 62, 10, 70};
    int newArr[size - 1];
    for (int i = 0; i < size - 1; i++)
    {
        newArr[i] = arr[i+1] - arr[i];
    }

    // print new array
    for (int i = 0; i < size - 1; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}