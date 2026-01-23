#include <iostream>
using namespace std;
void countZeroOne(int arr[], int size)
{
    int countZero = 0;
    int countOne = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;  
        }
        else if (arr[i] == 1)
        {
            countOne++;
        }
    }
    cout << "Zero present in Array = " << countZero << endl;
    cout << "One present in Array = " << countOne;
}
int main()
{
    int size = 10;
    int arr[10] = {0, 1, 1, 0, 1, 0, 0, 0, 1, 0};
    countZeroOne(arr, size);
    return 0;
}