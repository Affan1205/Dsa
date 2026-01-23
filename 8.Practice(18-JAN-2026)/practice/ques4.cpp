/*4️⃣ Check if a number is a strong number
Example: 145 → 1! + 4! + 5! = 145*/
#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
bool isStrongNumber(int n)
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
    cout << "enter an input: ";
    cin >> n;
    if (isStrongNumber(n))
    {
        cout << n << " is a strong number.";
    }
    else
    {
        cout << n << " is a Not Strong number.";
    }

    return 0;
}