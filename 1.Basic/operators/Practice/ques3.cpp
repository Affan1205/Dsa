// Take age as input and print Eligible to vote or Not eligible.
#include <iostream>
using namespace std;
int main()
{
    int age = 23;
    if (age >= 18)
    {
        cout << "eligible to vote.";
    }
    else
    {
        cout << "not eligible to vote.";
    }

    return 0;
}