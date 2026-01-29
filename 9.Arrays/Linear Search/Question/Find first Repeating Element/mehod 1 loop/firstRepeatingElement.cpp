#include <iostream>
using namespace std;
int main()
{
    int n = 6;
    int arr[6] = {1, 3, 4, 5, 4, 3};
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
        if (found)
        {
            break;
        }
        }

    return 0;
}