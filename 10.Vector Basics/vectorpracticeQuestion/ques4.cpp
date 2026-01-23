// 4️⃣ Take n as input, then take n integers into a vector and print them
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int>arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}