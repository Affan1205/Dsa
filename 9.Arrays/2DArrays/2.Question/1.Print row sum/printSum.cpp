#include <iostream>
using namespace std;
void printRowSum(int arr[3][4], int row, int col)
{
    int rowSum = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            rowSum = rowSum + arr[i][j];
        }
        cout << "Sum of row " << i << " = " << rowSum << endl;
    }
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];
    // Taking input
    cout << "Enter the input: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing the 2d array
    cout << "Array is = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nRow sum of rows as follows :- " << endl;
    printRowSum(arr, row, col);
    return 0;
}