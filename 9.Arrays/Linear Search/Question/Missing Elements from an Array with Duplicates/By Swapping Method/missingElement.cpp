#include <iostream>
#include <vector>
using namespace std;
void findMissingElement(vector<int> arr)
{
    int i = 0;
    while (i < arr.size())
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
}
int main()
{
    vector<int> arr{1, 3, 5, 4, 3};
    findMissingElement(arr);
    return 0;
}