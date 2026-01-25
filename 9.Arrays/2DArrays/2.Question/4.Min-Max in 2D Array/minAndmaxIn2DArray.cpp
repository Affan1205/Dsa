#include <iostream>
using namespace std;
int getMax(int arr[3][4], int row, int col)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > maxi)
            {
                maxi = arr[i][j];
            }
        }
    }
    return maxi;
}
int getMin(int arr[3][4], int row, int col)
{
    int min = INT32_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];
    // Taking Input
    cout << "Enter the inputs : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nArray = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int maximum = getMax(arr, row, col);
    cout << "Maximum element = " << maximum << endl;
    int minimum = getMin(arr, row, col);
    cout << "Minimum element = " << minimum << endl;
    return 0;
}