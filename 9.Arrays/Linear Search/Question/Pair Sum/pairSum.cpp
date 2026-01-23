#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int arr[10] = {49, 3, 91, 26, 63, 73, 23, 37, 34, 82};
    int sum = 49;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                cout << "(" << arr[i] << ", " << arr[j] << ") are pairs";
            }
        }
    }

    return 0;
}