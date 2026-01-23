// Take two numbers and print the greater number.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    if (a > b)
    {
        cout << "a is greater.";
    }
    else if (a < b)
    {
        cout << "b is greater.";
    }
    else
    {
        cout << "both are equal.";
    }

    return 0;
}