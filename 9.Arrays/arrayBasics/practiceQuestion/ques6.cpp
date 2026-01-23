// 6️⃣ Print elements at even indexes only
#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int arr[7] = {1, 0, 9, 4, 7, 5, 6};
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}