#include <iostream>
using namespace std;
void printColSum(int arr[3][4], int row, int col)
{
    int colSum = 0;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            colSum = colSum+ arr[j][i];
        }
        cout << "Sum of col " << i << " = " << colSum << endl;
    }
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];
    // Taking inputs for 2d array
    cout << "Enter the input : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing 2d array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printColSum(arr, row, col);
    return 0;
}