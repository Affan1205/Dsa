// 9️⃣ Print each element with its index
// Index 0 → 10
// Index 1 → 20
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of Vector: ";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the element in vector: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << "index " << i << " -> " << arr[i] << endl;
    }

    return 0;
}