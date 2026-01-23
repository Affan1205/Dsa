#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            if (row == 1 || col == 1 || row == n || col == n)
            {
                cout << "4";
            }
            else if (row == 2 || col == 2 || row == n - 1 || col == n - 1)
            {
                cout << "3";
            }
            else if (row == 3 || col == 3 || row == n - 2 || col == n - 2)
            {
                cout << "2";
            }
            else if ( col == row )
            {
                cout << "1";
            }
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}