// 5️⃣ Take a 3×3 matrix from user and print each row on a new line
#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3];
    // Taking inputs
    cout << "Enter the input: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // Printing 2D Array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}