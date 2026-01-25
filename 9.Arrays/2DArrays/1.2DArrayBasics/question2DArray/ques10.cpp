// 🔟 Print only the last column
#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {{6, 8, 2}, {3, 7, 5}, {9, 0, 4}};
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (j == col - 1)
            {
                cout << arr[i][j] << " ";
            }
        }
    }

    return 0;
}