#include <iostream>
using namespace std;
int main()
{
    /*switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}*/
    // Print day name using switch statement
    int day;
    cout << "enter input: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Today is Monday.:)";
        break;
    case 2:
        cout << "Today is Tuesday.:)";
        break;
    case 3:
        cout << "Today is Wednesday.:)";
        break;
    case 4:
        cout << "Today is Thursday.:)";
        break;
    case 5:
        cout << "Today is Friday.:)";
        break;
    case 6:
        cout << "Today is Saturday.:)";
        break;
    case 7:
        cout << "Today is Sunny Sunday.:)";
        break;

    default:
        cout << "Enter valid input";
        break;
    }
    return 0;
}