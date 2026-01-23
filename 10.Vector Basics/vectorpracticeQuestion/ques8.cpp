// 8️⃣ Print first and last element of the vector
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> arr{4, 9, 8, 3, 4, 2, 3, 1, 9, 5, 1, 5, 5, 7, 5, 5, 3, 4, 6, 1, 8};
    cout << "size of vector is  = " << arr.size() << endl;
    cout << "First element in vector : " << arr[0] << endl;
    cout << "Last element in vector : " << arr[arr.size() - 1] << endl;
    return 0;
}