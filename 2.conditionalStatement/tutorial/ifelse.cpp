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
        cout << a << " A is greater.";
    }
    else
    {
        cout << b << " B is greater.";
    }

    return 0;
}