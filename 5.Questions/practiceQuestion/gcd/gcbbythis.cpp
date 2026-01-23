#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else if (b == 0)
    {
        return a;
    }

    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a; // or return b (both same here)
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "enter the two number: " << endl;
    int ans = gcd(a, b);
    cout << "Gcd of " << a << " and " << b << " is " << ans;
    return 0;
}