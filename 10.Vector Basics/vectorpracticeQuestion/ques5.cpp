// 5️⃣ Print vector elements in reverse order
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the vector size: ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}