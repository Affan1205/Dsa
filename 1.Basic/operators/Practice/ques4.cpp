// Take 3 numbers and print the largest.
#include <iostream>
using namespace std;
int main()
{
    int a = 23, b = 43, c = 10;
    if (a > b && a > c)
    {
        cout << a;
    }
    else if (b > c)
    {
        cout << b;
    }
    else{
        cout << c ;
    }

    return 0;
}