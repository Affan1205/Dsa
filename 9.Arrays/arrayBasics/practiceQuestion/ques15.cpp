// 1️⃣5️⃣ Print array in this format:

// Index 0 → 10
// Index 1 → 20
// Index 2 → 30
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int arr[10] = {60, 5, 62, 74, 35, 71, 48, 94, 22, 78};
    for (int i = 0; i < size; i++)
    {
        cout << "Index " << i << "->" << arr[i] << endl;
    }

    return 0;
}