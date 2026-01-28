#include <iostream>
#include <vector>
using namespace std;
void wavePrint(vector<vector<int>> arr)
{
    for (int col = 0; col < arr[0].size(); col++)
    {
        // if column is even
        if (col % 2 == 0)
        {
            for (int row = 0; row < arr.size(); row++)
            {
                cout << arr[row][col] << " ";
            }
            // cout << endl;
        }
        // if column is odd
        else if (col % 2 != 0)
        {
            for (int row = arr.size() - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
            // cout << endl;
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
int main()
{
    vector<vector<int>> arr = {{1, 3, 5, 7}, {8, 6, 4, 2}, {0, 9, 3, 4}};
    cout << "Printing the given 2d vector: " << endl;
    printVector(arr);
    cout << "Printing the given 2d vector In WAVE : " << endl;
    wavePrint(arr);
    return 0;
}