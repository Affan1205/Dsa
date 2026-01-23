// 1️⃣ Declare a vector of integers and print all elements

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{44, 96, 34, 23, 19, 15, 57, 46, 18, 52};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}