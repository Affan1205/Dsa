#include <iostream>
using namespace std;
int main()
{
    // int arr[3][]= {{24, 76, 31, 96}, {41, 18, 80}, {30, 60, 50, 20, 56}};//---->>NOT-VALID<<---
    // int arr[][]= {{24, 76, 31, 96}, {41, 18, 80}, {30, 60, 50, 20, 56}};//---->>NOT-VALID<<---
    // int arr[][4];//--->>NOT-VALID<<---
    int arr[][4] = {{24, 76, 31, 96}, {41, 18, 8, 80}, {30, 60, 50, 20}}; //--- valid ---
    int rows = sizeof(arr) / sizeof(arr[0]); // 48/16
    int cols = 4;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}