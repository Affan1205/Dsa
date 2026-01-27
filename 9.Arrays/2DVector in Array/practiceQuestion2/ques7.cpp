// Question 7️⃣ — Sum of main diagonal elements
// Task:
// Given a square 2D vector (rows == cols):
// Calculate the sum of main diagonal element
// Main diagonal means:
// arr[0][0], arr[1][1], arr[2][2], ...
// Example:
// 1 2 3
// 4 5 6
// 7 8 9
// Output:
// Diagonal sum = 1 + 5 + 9 = 15
#include <vector>
#include <iostream>
using namespace std;
int printDiagonalSum(vector<vector<int>> arr)
{
    int diagonalSum = 0;
    for (int row = 0; row < arr.size(); row++)
    {

        diagonalSum = diagonalSum + arr[row][row];
        // for (int col = 0; col < arr[row].size(); col++)
        // {
        // }
    }
    return diagonalSum;
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
    int result = printDiagonalSum(arr);
    cout << "Diagonal sum of square matrix is : " << result;
    return 0;
}