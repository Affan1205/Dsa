#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Declaring an vector
    // vector<int> arr;

    // Initializing an vector

    // vector<int> arr{1,2,4};//we intialize array by this Method1

    // vector<int> arr(10, 1); // 1 1 1 1 1 1 1 1 1 1 store 1 in all vector.
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Taking Input and then printing

    int n;
    cout << "enter the size of vector: ";
    cin >> n;
    vector<int> arr(n);
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