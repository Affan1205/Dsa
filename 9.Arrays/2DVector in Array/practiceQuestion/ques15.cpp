// Take input for a 2D vector and print:
// Row 0 → 1 2 3
// Row 1 → 4 5 6
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "enter the rows and col: " << endl;
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking inputs
    cout << "enter the inputs \n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nArray = " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "Row " << i << "-> ";
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}