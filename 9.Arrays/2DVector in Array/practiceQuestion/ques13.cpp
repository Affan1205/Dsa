// Create a 2D vector of size 4×2, take input, and print each row on a new line.
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    cout << "Enter the row and col: ";
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col));
    // taking inputs
    cout << "enter the inputs: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing 2d vector
    cout << "\nvector=== " << endl;
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