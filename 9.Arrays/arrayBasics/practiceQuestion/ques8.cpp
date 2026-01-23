// 8️⃣ Print first and last element of the array
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[5] = {23, 4, 8, 9, 2};
    cout << " First Element: " << arr[0] << endl;
    cout << " Last Element: " << arr[size - 1] << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     if (i == 0 || i == (size - 1))
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    return 0;
}