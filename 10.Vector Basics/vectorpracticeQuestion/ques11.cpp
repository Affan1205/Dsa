// 1️⃣1️⃣ Find sum of all elements
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{48, 43, 39, 33, 18, 56, 3, 25, 93, 22};
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum of all elements in vector is = " << sum;
    return 0;
}