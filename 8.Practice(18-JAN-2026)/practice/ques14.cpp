#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col = col + 1;
        }
        int col2 = row - 1;
        int value = col2;
        while (col2)
        {
            cout << value;
            value--;
            col2--;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}