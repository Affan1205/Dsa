// Print the 2D vector in reverse row order
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5}, {6, 7, 8, 9}};
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        for (int j = arr[i].size()-1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}