#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b: ";
    cin >> a >> b;
    char op;
    cout << "select an operation(+,-,*,/,%): ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << (a + b);
        break;
    case '-':
        cout << (a - b);
        break;
    case '*':
        cout << (a * b);
        break;
    case '/':
        cout << (a / b);
        break;
    case '%':
        cout << (a % b);
        break;

    default:
        cout << "enter only available option.";
        break;
    }
    return 0;
}