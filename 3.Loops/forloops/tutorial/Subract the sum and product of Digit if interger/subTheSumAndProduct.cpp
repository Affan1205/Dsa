#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter an Interger: ";
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        product = product * rem;
        n = n / 10;
    }
    int answer = product - sum;
    cout << "Answer is : " << answer;

    return 0;
}