/*3️⃣ Take a number and:

Print number of set bits (1s in binary)*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter an interger: ";
    cin >> n;
    int temp = n;
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << "Number of set bits in " << temp << " = " << count;
    return 0;
}