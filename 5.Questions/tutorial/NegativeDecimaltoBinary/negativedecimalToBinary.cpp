#include <iostream>
using namespace std;

int main() {
    unsigned int n = -9; // must be unsigned

    int total_bits = sizeof(n) * 8;

    for (int i = total_bits - 1; i >= 0; i--) {
        cout << ((n >> i) & 1);
    }

    cout << endl;
    return 0;
}
