// Take a charscter and check whether it is:
//  Uppercase
//  Lowercase
//  Not an alphabet
#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "enter an character: ";
    cin >> ch;
    if (ch >= 97 && ch <= 122)
    {
        cout << "Lowercase";
    }
    else if (ch >= 65 && ch <= 90)
    {
        cout << "Uppercase";
    }
    else
    {
        cout << "Not an alphabet";
    }

    return 0;
}