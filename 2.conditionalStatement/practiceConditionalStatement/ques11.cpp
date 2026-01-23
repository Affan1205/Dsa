// Simple Calculator
// Take two numbers and an operator (+ - * /)
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter input a and b resp. : ";
    cin >> a >> b;
    char op;
    cout << "Enter an Operation(+ - * /) : ";
    cin >> op;
    if (op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else if (op == '/')
    {
        if (b == 0)
        {
            cout << "Number can't divide by 0";
        }
        else
        {
            cout << a / b;
        }
    }

    return 0;
}