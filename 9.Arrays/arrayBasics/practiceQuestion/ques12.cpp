// 1️⃣2️⃣ Find product of all elements
#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int arr[5] = {2, 4, 5, 7, 3};
    int product = 1;
    for (int i = 0; i < 5; i++)
    {
        product = product * arr[i];
    }
    cout << "Product of all elements: " << product;

    return 0;
}