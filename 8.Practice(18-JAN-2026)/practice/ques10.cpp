/*lcm*/
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
    cout << "Gcd of " << num1 << " and " << num2 << " = " << ans <<endl;
    int lcm = (num1 * num2) / ans;
    cout << "Lcm of " << num1 << " and " << num2 << " = " << lcm;

    return 0;
}