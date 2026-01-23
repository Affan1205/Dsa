#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the input:";
    cin >> n;
    int m = n;
    int ans = 0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT32_MAX) || (ans < INT32_MIN))
        {
            cout << "number is overflowed.";
        }
        else
        {
            ans = ans * 10 + digit;
        }
        n = n / 10;
    }
    if (ans == m)
    {
        cout << "Number is Palindrome.";
    }
    else
    {
        cout << "Number is not Palindrome.";
    }

    return 0;
}