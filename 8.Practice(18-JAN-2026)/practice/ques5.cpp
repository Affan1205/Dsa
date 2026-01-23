/*5️⃣ Find GCD of two numbers without using library functions*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter two numbers: ";
    cin >> num1 >> num2;
    int ans;
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            ans = i;
        }
    }
    cout << "Gcd of " << num1 << " and " << num2 << " = " << ans;

    return 0;
}