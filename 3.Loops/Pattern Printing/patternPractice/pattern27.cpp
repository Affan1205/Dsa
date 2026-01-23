// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // Ist Triangle
        int col1 = 1;
        while (col1 <= n - row + 1)
        {
            cout << col1;
            col1 = col1 + 1;
        }
        // IInd Triangle
        int star1 = row - 1;
        while (star1)
        {
            cout << "*";
            star1 = star1 - 1;
        }
        // IIIrd Triangle
        int star2 = row - 1;
        while (star2)
        {
            cout << "*";
            star2 = star2 - 1;
        }
        // IVth Triangle
        int col2 = 1;
        int start = n - row + 1;
        while (col2 <= n - row + 1)
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