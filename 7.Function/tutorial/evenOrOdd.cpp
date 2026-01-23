#include <iostream>
using namespace std;
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    return 1;
}
int main()
{
    int n;
    cout << "enter an input: ";
    cin >> n;
    if (isEven(n))
    {
        cout << n << " is Even number.";
    }
    else
    {
        cout << n << " is Odd number.";
    }

    return 0;
}