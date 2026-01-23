#include <iostream>
using namespace std;
bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int size = 7;
    int arr[7] = {23, 34, 89, 8, 67, 43, 59};
    int key;
    cout << "Enter the Key to find: ";
    cin >> key;
    if (find(arr, size, key))
    {
        cout << "Key is found:)";
    }
    else
    {
        cout << "Key is not found";
    }

    return 0;
}