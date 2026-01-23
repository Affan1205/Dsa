#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the decimal number: ";
    cin >> n;
    int temp = n;
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int rem = n % 2;
        // cout << rem << endl;
        ans = ans + (rem * pow(10, i));
        // cout << ans << endl;
        n = n / 2;
        // cout << n << endl;
        i++;
    }
    cout << "Decimal of " << temp << " in Binary is : " << ans;
    return 0;
}