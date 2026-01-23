#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i < n; i++)
    {
        int nextSum = a + b;
        cout << nextSum << " ";
        a = b;
        b = nextSum;
    }

    return 0;
}