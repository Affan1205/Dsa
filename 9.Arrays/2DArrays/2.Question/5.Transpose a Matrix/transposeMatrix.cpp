#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    int arr[row][col] = {{2, 4, 6, 76}, {8, 10, 1, 24}, {3, 5, 7, 57}};
    int transpose[col][row];
    // printing original array
    cout << "original arrray is = " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transposing the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    cout << endl;
    // Printing the transpose matrix
    cout << "Transpose Array is = " << endl;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}