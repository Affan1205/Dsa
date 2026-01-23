#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the n: ";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "No of 1 bits: " << count;
    return 0;
}