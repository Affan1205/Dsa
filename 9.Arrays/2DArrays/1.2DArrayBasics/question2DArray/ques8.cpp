// 8️⃣ Print matrix elements column-wise
#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 4;
    int arr[3][4];
    // Taking input
    cout << "Enter the inputs : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing 2D Array col wise
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}