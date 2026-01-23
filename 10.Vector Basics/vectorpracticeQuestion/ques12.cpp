// 1️⃣2️⃣ Find maximum element (no STL)
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{48, 43, 39, 33, 18, 56, 3, 25, 93, 22};
    int max = INT32_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
           max = arr[i];
        }
        
    }
    cout << "Maximun of all elements in vector is = " << max;
    return 0;
}