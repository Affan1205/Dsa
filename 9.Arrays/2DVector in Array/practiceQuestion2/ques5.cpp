// ▶️ Question 5️⃣ — Largest element in each row
// Task:
// Given a 2D vector, for each row:
// find the maximum element
// print it row by row
#include <vector>
#include <iostream>
using namespace std;
void maxRowElement(vector<vector<int>> arr)
{
    for (int row = 0; row < arr.size(); row++)
    {
        int rowMax = INT32_MIN;
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (arr[row][col] > rowMax)
            {
                rowMax = arr[row][col];
            }
        }
        cout << "Row " << row << " max = " << rowMax << endl;
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
    vector<vector<int>> arr = {{6, 8, 2}, {9, 5}, {3, 1, 7, 4}};
    cout << endl;
    cout << "Printing 2d vector" << endl;
    printVector(arr);
    cout << endl;
    maxRowElement(arr);
    return 0;
}