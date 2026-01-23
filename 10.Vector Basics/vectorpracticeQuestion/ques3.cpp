// 3️⃣ Print vector elements using:
// normal for loop
// while loop
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{44, 96, 34, 23, 19, 15, 575, 53, 46, 18, 52};
    cout << "Printing using for loop = ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing using while loop = ";
    int j = 0;
    while (j < arr.size())
    {
        cout << arr[j] << " ";
        j++;
    }

    return 0;
}