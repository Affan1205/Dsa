// CASE 3 - INPUT AND OUTPUT from User(Dynamic Rows and Columns)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int rows, cols;
    cout << "enter the rows and cols : ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    cout << "enter the inputs: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2d vector arr = " << endl;
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