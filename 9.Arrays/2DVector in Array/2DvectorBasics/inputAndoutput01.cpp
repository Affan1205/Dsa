// CASE 1 - when Input and output for fixed size fo a 2d vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    vector<vector<int>> arr(row, vector<int>(col));
    // Taking input
    cout <<"Enter the input: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}