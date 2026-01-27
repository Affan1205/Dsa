// 2️⃣ Print sum of each row
// Problem statement (simple & clear):
// Take a 2D vector from input (rows × cols)
// For each row, calculate the sum
// Print it like:
// Row 0 sum = 10
// Row 1 sum = 25
// Row 2 sum = 18
#include <vector>
#include <iostream>
using namespace std;
void printRowSum(vector<vector<int>> arr){
    for (int row = 0; row < arr.size(); row++)
    {
        int rowSum = 0 ;
        for (int col = 0; col < arr[row].size(); col++)
        {
            rowSum = rowSum + arr[row][col];
        }
        cout << "Row " << row << " sum = " << rowSum;
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
    cout << "Enter the number of rows and cols: ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking input form user
    cout << "Enter the input: ";
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
    printRowSum(arr);
    return 0;
}