#include <iostream>
using namespace std;
void printExtremes(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        if (start == end)
        {
            cout << arr[start] << " ";
            //    cout << arr[end] << " ";//same thing both index are on same place
        }
        else
        {
            cout << arr[start]++ << " ";
            cout << arr[end]++ << " ";
        }
        start++;
        end--;
    }
}
int main()
{
    int evenSize = 8;
    int evenArray[8] = {95, 49, 1, 68, 36, 20, 72, 59};
    int oddSize = 7;
    int oddArray[7] = {64, 27, 25, 45, 88, 72, 40};
    printExtremes(evenArray, evenSize);
    cout << endl;
    printExtremes(oddArray, oddSize);
    return 0;
}