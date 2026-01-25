// Take input for a 2D vector with rows and cols given by user and print it.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row;
    int col;
    cout << "Enter the no. of rows: ";
    cin >> row;
    cout << "Enter the no. of col: ";
    cin >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    // taking input
    cout << "enter the element in 2d vector:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\n2d vector = " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}