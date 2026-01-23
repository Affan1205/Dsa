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
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int col1 = 1;
        while (col1 <= n - row + 1)
        {
            cout << "*";
            col1 = col1 + 1;
        }
        int col2 = 1;
        while (col2 <= n - row)
        {
            cout << "*";
            col2 = col2 + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}