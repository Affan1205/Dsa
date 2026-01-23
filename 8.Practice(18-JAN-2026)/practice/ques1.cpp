/*1️⃣ Take an integer n
If n is divisible by 4 but not by 6, print Good
If divisible by 6 but not 4, print Bad
If divisible by both, print Excellent
Else print Neutral*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an input: ";
    cin >> n;
    if (n % 4 == 0 && n % 6 == 0)
    {
        cout << "Excellent";
    }
    else if (n % 4 == 0)
    {
        cout << "Good";
    }
    else if (n % 6 == 0)
    {
        cout << "Bad";
    }
    else
    {
        cout << "neutral";
    }

    return 0;
}