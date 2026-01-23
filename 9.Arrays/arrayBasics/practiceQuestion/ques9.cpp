// 9️⃣ Count how many elements are:
// positive
// negative
// zero
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int arr[10] = {4, 0, 34, -98, 99, 0, 83, -84, -3, 6};
    int countPositive = 0;
    int countNegative = 0;
    int countZero = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            countPositive++;
        }
        else if (arr[i] < 0)
        {
            countNegative++;
        }
        else
        {
            countZero++;
        }
    }
    cout << countPositive << " positive number present in Array." << endl;
    cout << countNegative << " negative number present in Array." << endl;
    cout << countZero << " Zeros present in Array." << endl;
    return 0;
}