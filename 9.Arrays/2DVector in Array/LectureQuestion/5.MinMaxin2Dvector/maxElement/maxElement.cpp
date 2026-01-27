// 10️⃣ Given a 2D vector, find the overall maximum element in the entire matrix.
#include <vector>
#include <iostream>
using namespace std;
int findMax(vector<vector<int>> arr)
{
    int max = INT32_MIN;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (arr[row][col] > max)
            {
                max = arr[row][col];
            }
        }
    }
    return max;
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
    vector<vector<int>> arr = {{2, 3}, {1, 4, 9}, {3, 7, 2}};
    cout << "2d vector = " << endl;
    printVector(arr);
    cout << endl;
    int maxElement = findMax(arr);
    cout << "Maximum element present in this 2d vector is = " << maxElement;
    return 0;
}