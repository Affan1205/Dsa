// 1️⃣ Take a 2D vector of size rows × cols from input and:
// print row-wise
// print column-wise
#include <vector>
#include <iostream>
using namespace std;
void printVectorRowWise(vector<vector<int>> arr)
{
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
void printVectorColWise(vector<vector<int>> arr)
{
    for (int col = 0; col < arr[0].size(); col++) // arr[0].size() because matrix is rowsXcols
    {
        for (int row = 0; row < arr.size(); row++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int rows;
    int cols;
    cout << "Enter the number of rows and cols: ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking input from user
    cout << "Enter the input in 2d vector: ";
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;
    cout << "---------2d vector Row Wise----------" << endl;
    printVectorRowWise(arr);
    cout << endl;
    cout << "---------2d vector Col Wise----------" << endl;
    printVectorColWise(arr);
    return 0;
}