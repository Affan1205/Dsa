// Find Unique Element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 2, 4, 2, 1, 3, 6, 5, 5, 6, 4};
    // outerLoop for vector arr
    for (int i = 0; i < arr.size(); i++)
    {
        int count = 0;
        // for every element run loop on vector arr
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "unique element is " << arr[i];
        }
    }

    return 0;
}