#include <iostream>
using namespace std;
int division(int dividend, int divisor)
{
    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start);
    int ans = -1;
    if (divisor == 0)
    {
        return 0;
    }
    if (dividend == INT32_MIN && divisor == -1) // interger overflow
    {
        return INT32_MAX;
    }
    while (start <= end)
    {
        if (abs(divisor * mid) == abs(dividend))
        {
            return mid;
        }
        else if (abs(divisor * mid) < abs(dividend))
        {
            ans = mid; // store mid and check right if any mid on right is less than equal to dividend
            start = mid + 1;
        }
        else if (abs(divisor * mid) > abs(dividend))
        {
            end = mid - 1;
        }
        mid = start + (end - start);
    }
    if (divisor < 0 && dividend < 0 || divisor > 0 && dividend > 0)
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int dividend;
    cout << "enter the dividend -> ";
    cin >> dividend;
    int divisor;
    cout << "enter the divisor -> ";
    cin >> divisor;
    int ans = division(dividend, divisor);
    cout << "Answer is : " << ans;

    cout << "\n--------------------" << endl;
    int precision;
    cout << "enter how many floating points => ";
    cin >> precision;
    double step = 0.1;
    double finalAns = abs(ans);
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; (divisor * j) <= abs(dividend); j = j + step)
        {
            finalAns = j;
        }
        step = step/10;
    }

    if (divisor < 0 && dividend < 0 || divisor > 0 && dividend > 0)
    {
        cout << "final ans is => " << finalAns;
    }
    else
    {
        cout << "final ans is => " << -finalAns;
    }
    return 0;
}