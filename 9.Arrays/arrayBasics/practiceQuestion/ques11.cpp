// 1️⃣1️⃣ Find sum of all elements
#include <iostream>
using namespace std;
int main()
{
    int size = 10;
    int arr[10] = {14, 55, 12, 21, 8, 81, 87, 9, 4, 54};
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of all elements in array : " << sum;

    return 0;
}