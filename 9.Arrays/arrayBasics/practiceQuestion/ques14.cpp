// 1️⃣4️⃣ Print array elements separated by commas
// Input: 1 2 3 4
// Output: 1, 2, 3, 4
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[5] = {23, 43, 89, 9, 7};
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}