#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the input : ";
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "Yes " << n << " is a Prime Number.";
    }
    else
    {
        cout << "No " << n << " is a Not Prime Number.";
    }

    return 0;
}