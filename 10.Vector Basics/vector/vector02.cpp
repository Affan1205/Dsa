#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 70, 26, 31, 96, 21, 45};
    // Print vector before Inserting element
    cout << "Vector Before = ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Inserting Elements
    arr.push_back(222);
    arr.push_back(111);
    arr.push_back(888);
    // Printing vector after Inserting element
    cout << "Vector after = ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Remove / deleting elements from vector
    arr.pop_back();
    arr.pop_back();
    cout << "vector after deleting elemnts";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Vector Empty or not : " << arr.empty();
    return 0;
}