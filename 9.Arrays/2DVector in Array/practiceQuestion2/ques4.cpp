// ▶️ Question 4️⃣ — Count even and odd elements
// Task:
// Traverse the entire 2D vector
// Count:
// total even elements
// total odd elements
// Print results
#include <vector>
#include <iostream>
using namespace std;
void countEvenOdd(vector<vector<int>> arr)
{
    int countEven = 0;
    int countOdd = 0;
    for (int row = 0; row < arr.size(); row++)
    {
        for (int col = 0; col < arr[row].size(); col++)
        {
            if (arr[row][col] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
    }
    cout << "Even count = " << countEven << endl;
    cout << "Odd count = " << countOdd << endl;
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
    vector<vector<int>> arr = {{9, 4, 7}, {8, 1, 3, 5}, {2, 6}};
    cout << endl;
    cout << "Printing 2d vector" << endl;
    printVector(arr);
    cout << endl;
    countEvenOdd(arr);
    return 0;
}