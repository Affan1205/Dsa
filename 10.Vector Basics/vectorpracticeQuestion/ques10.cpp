// 🔟 Count even and odd numbers in vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{48, 43, 39, 33, 18, 56, 3, 25, 93, 22};
    int countEven = 0;
    int countOdd = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0)
        {
            countEven++;
        }
        else
        {
            countOdd++;
        }
    }
    cout << "Even Number is vector = " << countEven << endl;
    cout << "Odd Number is vector = " << countOdd << endl;
    return 0;
}