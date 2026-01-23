// Take a number and check:
// Divisible by 3 and 5
// Divisible by only 3
// Divisible by only 5
// Not divisible by both
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter an number input: ";
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "Divisible by 3 and 5";
    }
    else if (num % 3 == 0)
    {
        cout << "Divisible by 3";
    }
    else if (num % 5 == 0)
    {
        cout << "Divisible by 5";
    }
    else
    {
        cout << "Not divisible by both.";
    }

    return 0;
}