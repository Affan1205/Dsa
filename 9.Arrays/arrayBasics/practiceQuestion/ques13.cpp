// 1️⃣3️⃣ Print average of array elements
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[5] = {2, 4, 5, 7, 3};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    float avg = (sum/size);
    cout << "Average of all elements: " << avg;

    return 0;
}