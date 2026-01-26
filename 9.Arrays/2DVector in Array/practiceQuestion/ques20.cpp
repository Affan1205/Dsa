// Print 2d vector column wise in jagged 2d vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{2, 34, 53}, {3, 59, 89, 67}, {21, 84}};
    // first finding maximum col
    int maxCol = 0;
    for (int row = 0; row < arr.size(); row++)
    {
        if (arr[row].size() > maxCol)
        {
            maxCol = arr[row].size();
        }
    }
    // now printing the 2D array
    for (int col = 0; col < maxCol; col++)
    {
        for (int row = 0; row < arr.size(); row++)
        {
            if(col < arr[row].size()){

                cout << arr[row][col] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}