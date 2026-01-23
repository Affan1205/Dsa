#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an Input: ";
    cin >> n;
    int temp = n;
    int ans=0;
    while (n != 0)
    {
        int digit = n % 10;
        if ((ans > INT32_MAX / 10) || (ans < INT32_MIN))
        {
            cout << "0";
        }
        else{

            ans = ans * 10 + digit;
        }

        n = n / 10;
    }
    cout << "Reverse of number " << temp << " is: " << ans;

    return 0;
}