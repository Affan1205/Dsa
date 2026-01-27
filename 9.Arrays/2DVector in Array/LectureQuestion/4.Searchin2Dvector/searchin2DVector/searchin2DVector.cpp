// Question 11 — Check if an element exists (Boolean search)
// Task:
// Given a 2D vector (can be jagged)
// Take a number x
// If x exists anywhere in the matrix → print "Found"
// Otherwise → print "Not Found"
#include <vector>
#include <iostream>
using namespace std;
bool searchElement(vector<vector<int>> arr, int key)
{
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (arr[row][col] == key)
            {
                return true;
            }
        }
    }
    return false;
}
void printVector(vector<vector<int>> arr)
{
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr = {{2, 3}, {1, 4, 9}, {3, 7, 2}};
    cout << "2d vector = " << endl;
    printVector(arr);
    cout << endl;
    int key;
    cout << "Enter the key: ";
    cin >> key;
    if (searchElement(arr, key))
    {
        cout << "Found!";
    }
    else
    {
        cout << "Not Found!!";
    }

    return 0;
}
