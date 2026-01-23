
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
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
        while (col1 <= n - row + 1)
        {
            cout << "*";
            col1 = col1 + 1;
        }
        int space1 = row - 1;
        while (space1)
        {
            cout << " ";
            space1 = space1 - 1;
        }
        int space2 = row - 1;
        while (space2)
        {
            cout << " ";
            space2 = space2 - 1;
        }
        int col2 = 1;
        while (col2 <= n - row + 1)
        {
            cout << "*";
            col2 = col2 + 1;
        }
        cout << endl;
        row = row + 1;
    }

    int row2 = 1;
    while (row2 <= n)
    {
        int col1down = 1;
        while (col1down <= row2)
        {
            cout << "*";
            col1down = col1down + 1;
        }
        int space1down = n - row2;
        while (space1down)
        {
            cout << " ";
            space1down = space1down - 1;
        }
        int space2down = n - row2;
        while (space2down)
        {
            cout << " ";
            space2down = space2down - 1;
        }
        int col2down = 1;
        while (col2down <= row2)
        {
            cout << "*";
            col2down = col2down + 1;
        }

        cout << endl;
        row2 = row2 + 1;
    }


    return 0;
}