
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col1 = 1;
        while (col1 <= row)
        {
            cout << col1;
            col1 = col1 + 1;
        }
        int space1 = n - row;
        while (space1)
        {
            cout << " ";
            space1 = space1 - 1;
        }
        int space2 = n - row;
        while (space2)
        {
            cout << " ";
            space2 = space2 - 1;
        }
        int col2 = 1;
        int start = row;
        while (col2 <= row)
        {
            cout << start;
            start = start - 1;
            col2 = col2 + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}