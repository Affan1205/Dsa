// ▶️ Question 3️⃣ — Print sum of each column
// Task:
// Take the same 2D vector
// Print:
// Column 0 sum = X
// Column 1 sum = Y
// Column 2 sum = Z
#include <vector>
#include <iostream>
using namespace std;
void printColSum(vector<vector<int>> arr)
{
    for (int col = 0; col < arr[0].size(); col++)
    {
        int colSum = 0;
        for (int row = 0; row < arr.size(); row++)
        {
            colSum += arr[row][col];
        }
        cout << "Col " << col << " sum = " << colSum;
        cout << endl;
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
    printColSum(arr);
    return 0;
}