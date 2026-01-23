#include <iostream>
using namespace std;

void change(int x) {
    x = 10;   // changing the copy
    cout << "Inside function: " << x << endl;
}

int main() {
    int a = 5;

    change(a);

    cout << "Inside main: " << a << endl;
    return 0;
}
