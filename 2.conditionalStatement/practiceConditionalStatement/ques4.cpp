// Take age as input and print:
// Child (age < 13)
// Teenager (13–19)
// Adult (20+)
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 13)
    {
        cout << "child";
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "Teenager";
    }
    else
    {
        cout << "Adult";
    }

    return 0;
}