// 🔟 Count even and odd numbers in array
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int arr[10] = {33, 60, 67, 98, 46, 32, 52, 73, 55, 82};
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "Number of even number in array = " << countEven << endl;
    cout << "Number of odd number in array = " << countOdd << endl;

    return 0;
}