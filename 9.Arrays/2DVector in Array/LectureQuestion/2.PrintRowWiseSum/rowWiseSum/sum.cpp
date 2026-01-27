// Sum of each row AND each column
// Task:
// Given a rectangular 2D vector (rows × cols):
// Print the sum of each row
// Print the sum of each column
#include <vector>
#include <iostream>
using namespace std;
void printRowColSum(vector<vector<int>> arr)
{
    cout << "Row wise sum " << endl;
    for (int row = 0; row < arr.size(); row++)
    {
        int rowSum = 0;
        for (int col = 0; col < arr[row].size(); col++)
        {
            rowSum = rowSum + arr[row][col];
        }
        cout << "Row " << row << " Sum = " << rowSum << endl;
    }
    cout << endl;
    cout << "Col wise sum " << endl;
    for (int col = 0; col < arr[0].size(); col++)
    {
        int colSum = 0;
        for (int row = 0; row < arr.size(); row++)
        {
            colSum = colSum + arr[row][col];
        }
        cout << "Col " << col << " Sum = " << colSum << endl;
    }
}
void printVector(vector<vector<int>> arr)
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
int main()
{
    int rows;
    int cols;
    cout << "Enter no of rows and cols: ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking input
    cout << "Enter the input for 2d vector" << endl;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;
    cout << "Printing 2d vector" << endl;
    printVector(arr);
    cout << endl;
    printRowColSum(arr);
    return 0;
}