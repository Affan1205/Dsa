// 7️⃣ Print elements at odd indexes only
#include <iostream>
using namespace std;
int main()
{
    int size = 7;
    int arr[7] = {71, 92, 37, 48, 50, 61, 90};
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}