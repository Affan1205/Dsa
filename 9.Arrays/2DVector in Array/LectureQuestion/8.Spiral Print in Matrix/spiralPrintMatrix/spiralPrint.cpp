#include <iostream>
#include <vector>
using namespace std;
void printSpiralMatrix(vector<vector<int>> arr)
{
    int totalElement = arr.size() * arr[0].size();
    int startingRow = 0;
    int endingCol = arr[0].size() - 1;
    int endingRow = arr.size() - 1;
    int startingCol = 0;
    int count = 0;
    while (count < totalElement)
    {
        // print Starting Row
        for (int i = startingCol; i <= endingCol && count < totalElement; i++)
        {
            cout << arr[startingRow][i] << " ";
            count++;
        }
        startingRow++;
        // print Ending Col
        for (int i = startingRow; i <= endingRow && count < totalElement; i++)
        {
            cout << arr[i][endingCol] << " ";
            count++;
        }
        endingCol--;
        // print Ending Row
        for (int i = endingCol; i >= startingCol && count < totalElement; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }
        endingRow--;
        // print Starting Col
        for (int i = endingRow; i >= startingRow && count < totalElement; i--)
        {
            cout << arr[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4, 5, 6},
                               {7, 8, 9, 10, 11, 12},
                               {13, 14, 15, 16, 17, 18},
                               {19, 20, 21, 22, 23, 24},
                               {25, 26, 27, 28, 29, 30}};
    cout << "Spiral Print of given Matrix = " << endl;
    printSpiralMatrix(arr);
    return 0;
}