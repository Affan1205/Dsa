/*Take two integers a and b
Print how many operations are needed to make them equal
(Allowed operations: +1 or -1 on any one number)*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    // More Optimized
    int operations = abs(a - b);
    cout << operations;

    
    // int count1 = 0;
    // int count2 = 0;
    // while (a != b)
    // {
    //     if (a > b)
    //     {
    //         b++;
    //         count1++;
    //     }
    //     else if (b > a)
    //     {
    //         b--;
    //         count2++;
    //     }
    // }
    // int result = count1 + count2;
    // cout << "total number of operation: " << result;

    return 0;
}