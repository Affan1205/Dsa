#include <iostream>
#include <vector>
using namespace std;
void wavePrint(vector<vector<int>> arr)
{
    for (int row = 0; row < arr.size(); row++)
    {
        // if row is even
        if (row % 2 == 0)
        {
            for (int col = 0; col < arr[0].size(); col++)
            {
                cout << arr[row][col] << " ";
            }
            // cout<<endl;
        }
        // if row is odd
        else if (row % 2 != 0)
        {
            for (int col = arr[0].size() - 1; col >= 0; col--)
            {
                cout << arr[row][col] << " ";
            }
            // cout<<endl;
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
    vector<vector<int>> arr = {{9, 1, 5, 7}, {8, 4, 6, 2}, {81, 27, 95, 65}};
    cout << "Printing given 2d vector:" << endl;
    printVector(arr);
    cout << "Printing given 2d vector in wave from left to right:" << endl;
    wavePrint(arr);
    return 0;
}