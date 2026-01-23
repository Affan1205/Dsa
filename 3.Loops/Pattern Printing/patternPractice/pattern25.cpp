
//    1
//   23
//  456
// 78910
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    int start = 1;
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
            cout << start;
            start = start + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
    return 0;
}