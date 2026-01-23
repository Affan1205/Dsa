// Method2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the decimal number: ";
    cin >> n;
    int temp = n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
        i++;
    }

    cout << "Decimal of " << temp << " in Binary is : " << ans;

    return 0;
}
