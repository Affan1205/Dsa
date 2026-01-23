// Take three sides of a triangle and check:
// Valid triangle or not
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a:";
    cin >> a;
    cout << "enter b:";
    cin >> b;
    cout << "enter c:";
    cin >> c;
    if (a + b >= c && a + c >= b && b + c >= a)
    {
        cout << "valid triangle.";
    }
    else
    {
        cout << "not a valid triangle.";
    }
    return 0;
}