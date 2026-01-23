// Take a number and print Positive, Negative, or Zero.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Positive ";
    }
    else if (num < 0)
    {
        cout << "Negative ";
    }
    //num == 0 
    else
    {
        cout << "zero";
    }

    return 0;
}