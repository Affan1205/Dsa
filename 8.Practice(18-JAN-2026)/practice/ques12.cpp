#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp = temp / 10;
    }
    return ans;
}
bool isPalindrome(int n)
{
    int result = reverse(n);
    if (result == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isArmstrong(int n)
{
    int temp = n;
    // counting digit
    int count = 0;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }
    // calculating armstrong number
    temp = n;
    float ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans + pow(digit, count);
        temp = temp / 10;
    }
    if (ans == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
bool isStrong(int n)
{
    int temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans + factorial(digit);
        temp = temp / 10;
    }
    if (ans == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "enter an input: ";
    cin >> n;
    if (isStrong(n))
    {
        cout << n << " is a strong number.";
    }
    else if (isArmstrong(n))
    {
        cout << n << " is a Armstrong number.";
    }
    else if ((isPalindrome(n)))
    {
        cout << n << " is a Palindrome number.";
    }

    return 0;
}