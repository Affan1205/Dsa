// 4️⃣ Take rows and cols as input, then take matrix input and print it

#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "enter rows :";
    cin >> rows;
    cout << "enter cols :";
    cin >> cols;
    int arr[rows][cols];
    // Taking Inputs
    cout << "Enter the inputs : " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    // printing 2d array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}