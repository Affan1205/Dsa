// 2️⃣ Take 5 integers from user and print them in same order
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[5];
    cout << "Enter the inputs: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}