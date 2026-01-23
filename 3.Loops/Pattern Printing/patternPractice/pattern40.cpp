
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
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
            cout << "*";
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
        while (col2 <= row)
        {
            cout << "*";
            col2 = col2 + 1;
        }

        cout << endl;
        row = row + 1;
    }
    int row2 = 1;
    while (row2 <= n - 1)
    {
        int col1down = 1;
        while (col1down <= n - row2)
        {
            cout << "*";
            col1down = col1down + 1;
        }
        int space1down = row2;
        while (space1down)
        {
            cout << " ";
            space1down = space1down - 1;
        }
        int space2down = row2;
        while (space2down)
        {
            cout << " ";
            space2down = space2down - 1;
        }
        int col2down = 1;
        while (col2down <= n - row2)
        {
            cout << "*";
            col2down = col2down + 1;
        }
        cout << endl;
        row2 = row2 + 1;
    }

    return 0;
}