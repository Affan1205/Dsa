#include <iostream>
using namespace std;
int main()
{
    int rows = 3;
    int cols = 3;
    int arr[3][3];
    // Taking Input in 2D Array
    cout << "Enter the elements in array(Row-wise): " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Printing the 2d Array row-wise: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nEnter the elements in an array(for col-wise)" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[j][i];
        }
    }
    cout << "Printing the 2d Array col-wise: " << endl; // hum same order mein hi print karenge kyki humne input toh col wise liya
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}