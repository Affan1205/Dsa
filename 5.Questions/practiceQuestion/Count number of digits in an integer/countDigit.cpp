#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter an integer: ";
    cin >> n;
    int temp = n;
    int count = 0;
    while (n != 0)
    {
        int digit = n % 10;
        count++;
        n = n / 10;
    }
    cout << "number of digit in " << temp <<" is : " << count;

    return 0;
}