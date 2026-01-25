// Take input for a 2D vector and print only the last element of each row.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(3);
    arr[0] = vector<int>(3);
    arr[1] = vector<int>(2);
    arr[2] = vector<int>(4);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "vector: \n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "printing the first elments\n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (j == arr[i].size()-1)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}