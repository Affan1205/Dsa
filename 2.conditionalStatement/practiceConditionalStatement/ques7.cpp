// Take marks (0–100) and print grade:
//  A → 90–100
//  B → 75–89
//  C → 50–74
//  Fail → < 50
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks: ";
    cin >> marks;
    if (marks >= 90)
    {
        cout << "A";
    }
    else if (marks <= 89 && marks >= 75)
    {
        cout << "B";
    }
    else if (marks <= 74 && marks >= 50)
    {
        cout << "C";
    }
    else
    {
        cout << "Fail";
    }

    return 0;
}