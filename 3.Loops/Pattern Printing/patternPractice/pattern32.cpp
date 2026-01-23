// 1
// 01
// 101
// 0101
// 10101
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
        while (col <= row)
        {
            if ((row + col) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "0";
            }
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}