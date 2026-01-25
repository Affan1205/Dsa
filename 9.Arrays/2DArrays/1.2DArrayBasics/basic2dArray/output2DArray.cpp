#include <iostream>
using namespace std;
int main()
{
    int rows = 3;
    int cols = 3;
    int arr[3][3] = {{2, 4, 6}, {1, 3, 5}, {9, 8, 7}};
    // cout << arr[1][3] << endl;
    // cout << arr[2][2] << endl;
    // cout << arr[0][2] << endl;
    // cout << arr[2][1] << endl;

    // Printing row-wise
    cout << "Printing Row wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // printing col-wise
    cout << "\nPrinting column wise" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}