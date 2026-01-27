// Boundary Elements of Matrix
// Task:
// Given a rectangular 2D vector, print only the boundary elements.
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{14, 42, 43, 44}, {21, 22, 23, 24}, {11, 12, 13, 14}};
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (row == 0 || col == 0 || row == arr.size() - 1 || col == arr[row].size() - 1)
            {
                cout << arr[row][col] << " ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}