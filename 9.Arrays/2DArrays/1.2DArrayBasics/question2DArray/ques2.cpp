// 2️⃣ Declare a 2×4 array, initialize it, and print:
// row-wise
// column-wise
#include <iostream>
using namespace std;
int main()
{
    int rows = 2;
    int cols = 4;
    int arr[2][4] = {{1, 2, 3, 4}, {19, 28, 37, 46}};
    // printing rows wise
    cout << "Printing Row wise " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // printing cols wise
    cout << "Printing Col wise " << endl;
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}