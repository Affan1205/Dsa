#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter an input: ";
    cin >> n;
    int m = n;
    int mask = 0;
    // edge case
    if (n == 0)
    {
        cout << "1";
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int result = (~n) & mask;
    cout << "Compliment of " << n << " is : " << result;

    return 0;
}