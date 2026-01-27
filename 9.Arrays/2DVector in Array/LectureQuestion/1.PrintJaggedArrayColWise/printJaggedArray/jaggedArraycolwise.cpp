#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4}, {2, 4, 5, 9, 10}, {32, 34}, {7, 3, 4}};
    //
    int maxCol = 0;
    for (int row = 0; row < arr.size(); row++)
    {
        if (arr[row].size() > maxCol)
        {
            maxCol = arr[row].size();
        }
    }
    // for print col wise
    for (int col = 0; col < maxCol; col++)
    {
        for (int row = 0; row < arr.size(); row++)
        {
            if (col < arr[row].size())
            {
                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}