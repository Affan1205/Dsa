/*9️⃣ Write a function to:
Reverse a number
Use it to check palindrome (NO direct logic inside main)*/
#include <iostream>
using namespace std;
int reverseNumber(int n)
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
    int result = reverseNumber(n);
    if (result == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "enter an number: ";
    cin >> n;
    if (isPalindrome(n))
    {
        cout << n << " is a palindrome number.";
    }
    else
    {
        cout << n << " is not a palindrome number.";
    }

    return 0;
}