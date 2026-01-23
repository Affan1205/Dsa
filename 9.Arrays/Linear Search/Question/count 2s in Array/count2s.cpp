#include <iostream>
using namespace std;
void printCountTwo(int arr[], int size)
{
    int countTwo = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 2)
        {
            countTwo++;
        }
    }
    cout << "Number of 2's present in Given Array = " << countTwo << endl;
}
int main()
{
    int size = 10;
    int arr[10] = {23, 34, 89, 4, 9, 90, 42, 82, 91, 56};
    printCountTwo(arr, size);
    return 0;
}
