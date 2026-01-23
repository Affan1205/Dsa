// 5️⃣ Print array elements in reverse order
#include <iostream>
using namespace std;
int main()
{

    int size = 6;
    int arr[6]={61,16,29,83,47,56};
    for (int i = size-1; i>=0; i--)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}