// Declare a 2D vector where:
// Row 0 has 2 elements
// Row 1 has 4 elements
// Row 2 has 3 elements
// Take input for all elements and print them properly.
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<vector<int>> arr(3);
    arr[0] = vector<int>(2);
    arr[1] = vector<int>(4);
    arr[2] = vector<int>(3);

    cout << "\nEnter the element: ";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "\nPrinting the element: \n";
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}