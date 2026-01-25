// CASE 2 - INPUT AND OUTPUT WHEN ROWS KNOWNS, COLUMNS DIFFERENT
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2}, {5, 6, 7, 8}, {9}, {9, 8, 11}};
    cout << "Printing the 2D vector arr : " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}