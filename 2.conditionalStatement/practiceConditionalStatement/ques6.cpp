// Take a year and check whether it is a leap year.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter year: ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "Leap year.";
    }
    else
    {
        cout << "Not a leap year.";
    }

    return 0;
}