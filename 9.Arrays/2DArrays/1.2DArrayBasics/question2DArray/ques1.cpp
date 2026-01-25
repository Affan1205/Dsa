// 1️⃣ Declare a 3×3 2D array, initialize it, and print it row-wise
// 2️⃣ Declare a 2×4 array, initialize it, and print:
// row-wise
// column-wise

#include <iostream>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {{82, 34, 71}, {91, 63, 40}, {87, 23, 35}};
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
