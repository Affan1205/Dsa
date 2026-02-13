#include <iostream>
using namespace std;
int findSquareRoot(int n)
{
    int start = 0;
    int end = n;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;       // storing mid and checking right side for any other number that is less than mid
            start = mid + 1; // largest number that is less than number
        }
        else if (mid * mid > n)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    int ans = findSquareRoot(n);
    cout << "Interger Root of " << n << " is : " << ans << endl;
    cout << "-------------------" << endl;
    int precision;
    cout << "enter the decimal digit: ";
    cin >> precision;
    double step = 0.1;
    double finalAns = ans;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= n; j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Answer is " << n << " is : " << finalAns << endl;

    return 0;
}