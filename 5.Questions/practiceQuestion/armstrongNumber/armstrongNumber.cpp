#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    int temp = n;
    // fist we count digit
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp /= 10;
    }
    cout << count << endl;
    // calculating Armstrong Number
    temp = n;
    float ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        cout << digit << endl;
        ans = ans + (pow(digit, count));
        cout << ans << endl;
        temp /= 10;
    }
    // checking armstrong or not
    if (ans == n)
    {
        cout << "armstrong number.";
    }
    else
    {
        cout << "not a armstrong number.";
    }
    return 0;
}