#include <iostream>
using namespace std;
int main()
{

    int a;
    cout << "Enter the First Number: ";
    cin >> a;
    if (a > 0)
    {
        cout << " a is positive.";
    }
    else if (a < 0)
    {
        cout << " a is negative.";
    }
    else
    {
        cout << "a is zero.";
    }

    int age = 24;
    if (age > 20)
    {
        cout << " Great!";
    }
    else if (age == 24)
    {
        cout << "That's Great!!!!!";
    }
    else
    {
        cout << "Looks like you are old.";
    }

    return 0;
}