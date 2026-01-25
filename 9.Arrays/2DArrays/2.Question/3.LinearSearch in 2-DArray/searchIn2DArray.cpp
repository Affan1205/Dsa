#include <iostream>
using namespace std;
bool searchElement(int arr[3][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int row = 3;
    int col = 3;
    int arr[3][3] = {{81, 27, 43}, {21, 92, 65}, {41, 67, 30}};
    int key;
    cout << "Enter the target element/key to found: ";
    cin >> key;
    bool found = searchElement(arr, row, col, key);
    if (found)
    {
        cout << "key Found!!!!";
    }
    else
    {
        cout << "key Not Found----";
    }

    return 0;
}