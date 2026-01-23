// 6️⃣ Print elements at even indices only
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }
        return 0;
    }