// 6️⃣ — Smallest element in each column
// Task:
// Given a 2D vector (rectangular matrix):
// Find the minimum element in each column
// Print column-wise results
#include <vector>
#include <iostream>
using namespace std;
void minColElement(vector<vector<int>> arr)
{
    for (int col = 0; col < arr[0].size(); col++)
    {
        int colMin = INT32_MAX;
        for (int row = 0; row < arr.size(); row++)
        {
            if (arr[row][col] < colMin)
            {
                colMin = arr[row][col];
            }
        }
        cout << " Col " << col << " Min = " << colMin << endl;
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
    minColElement(arr);
    return 0;
}