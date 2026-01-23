#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int arr[7] = {80, 64, 54, 13, 36, 10, 66};
    int secondLargest = INT32_MIN;
    int firstLargest = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > firstLargest)
        {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element in array : " << secondLargest;
    return 0;
}