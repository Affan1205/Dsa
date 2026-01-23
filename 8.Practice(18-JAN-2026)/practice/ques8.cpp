/*8️⃣ Write a function that:
Returns true if number is Armstrong
Else returns false*/
#include <iostream>
#include <math.h>
using namespace std;
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
    // calucating armstrong
    temp = n;
    int ans = 0;
    while (temp != 0)
    {
        int digit = temp % 10;
        ans = ans + (int)pow(digit, count);
        temp = temp / 10;
    }
    // checking armstrong or not
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
    cout << "enter an number: ";
    cin >> n;
    if (isArmstrong(n))
    {
        cout << n << " is a armstrong number.";
    }
    else
    {
        cout << n << " is not a armstrong number.";
    }

    return 0;
}