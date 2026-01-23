
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
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
            char ch = 'A' + col1 - 1;
            cout << ch;
            ch = ch + 1;
            col1 = col1 + 1;
        }
        int col2 = row - 1;
        char start = 'A' + row - 2;
        while (col2)
        {
            cout << start;
            start = start - 1;
            col2 = col2 - 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}