// Question 13 — Transpose of a 2D vector (Rectangular)
// Task
// Given a rectangular 2D vector (rows × cols):
// Create a new 2D vector for transpose
// Transpose means:
// Rows become columns
// Columns become rows
// Print the transpose matrix
#include <vector>
#include <iostream>
using namespace std;
void TransposeVector(vector<vector<int>> &arr, vector<vector<int>> &transpose)
{
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            transpose[col][row] = arr[row][col];
        }
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
void printTransposeVector(vector<vector<int>> transpose)
{
    for (int row = 0; row < transpose.size(); row++)
    {
        for (int col = 0; col < transpose[row].size(); col++)
        {
            cout << transpose[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int rows = 3;
    int cols = 4;
    vector<vector<int>> arr(rows, vector<int>(cols));
    vector<vector<int>> transpose(cols, vector<int>(rows));
    // taking input
    cout << "Enter the inputs : " << endl;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;
    printVector(arr);
    cout << endl;
    // Transposing the Vector
    TransposeVector(arr, transpose);
    cout << "Transpose vector " << endl;
    printTransposeVector(transpose);

    return 0;
}