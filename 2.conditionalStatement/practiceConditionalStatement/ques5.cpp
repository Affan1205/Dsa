// Take 3 numbers and print the largest.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the second number: ";
    cin >> b;
    cout << "enter the third number: ";
    cin >> c;
    if (a >= b &&  a>= c)
    {
        cout << "a is greatest.";
    }
    else if (b >= a && b >= c)
    {
        cout << "b is greatest.";
    }
    else if (c > a && c > b)
    {
        cout << "c is greatest.";
    }

    return 0;
}