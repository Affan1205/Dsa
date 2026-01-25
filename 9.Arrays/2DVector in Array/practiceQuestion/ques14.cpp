// Take input for a 2D vector (rows × cols) and:
// Print elements row-wise
// Print elements column-wise
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int rows;
    int cols;
    cout << "Enter the no.of rows and cols : ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking input
    cout << "enter the output: ";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nPrinting element row-wise:" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nPrinting element col-wise:" << endl;
    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 0; j <arr.size(); j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}