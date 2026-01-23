// Take a number and check whether it is even or odd.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << " even ";
    }
    else
    {
        cout << "odd";
    }

    return 0;
}