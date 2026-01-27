// Question 9 — Count frequency of an element
// Task:
// Given a 2D vector
// Take a number x
// Count how many times x appears
#include <vector>
#include <iostream>
using namespace std;
int countElement(vector<vector<int>> arr, int key)
{
    int count = 0;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (arr[row][col] == key)
            {
                count++;
            }
        }
    }
    return count;
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
    int rows;
    int cols;
    cout << "Enter no of rows and cols: ";
    cin >> rows >> cols;
    vector<vector<int>> arr(rows, vector<int>(cols));
    // taking input
    cout << "Enter the input for 2d vector" << endl;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            cin >> arr[row][col];
        }
    }
    cout << endl;
    cout << "Printing 2d vector" << endl;
    printVector(arr);
    cout << endl;
    int key;
    cout << "Enter the element : ";
    cin >> key;
    int result = countElement(arr, key);
    cout << key << " is present in matrix " << result << " times .";
    return 0;
}