//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
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
        int col1 = 1;
        while (col1 <= row)
        {
            cout << "*";
            col1 = col1 + 1;
        }
        int star = row - 1;
        while (star)
        {
            cout << "*";
            star = star - 1;
        }
        cout << endl;
        row = row + 1;
    }
    int row2 = 1;
    while (row2 <= n)
    {
        int space = row2 - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col1 = 1;
        while (col1 <= n - row2 + 1)
        {
            cout << "*";
            col1 = col1 + 1;
        }
        int col2 = 1;
        while (col2 <= n - row2)
        {
            cout << "*";
            col2 = col2 + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }

return 0;
}