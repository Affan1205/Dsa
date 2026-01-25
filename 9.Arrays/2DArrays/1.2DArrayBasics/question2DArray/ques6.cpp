// 6️⃣ Take a matrix and print:
// total number of elements
// number of rows
// number of columns
#include <iostream>
using namespace std;
int main()
{
    int row =3;
    int col = 3;
    int arr[3][3] = {{43, 33, 27}, {6, 22, 89}, {93, 69, 55}};
    cout <<"Total number of elements = " << row*col << endl;
    cout << "Total number of rows = " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "Total cols of rows = " << sizeof(arr[0])/sizeof(arr[0][0]);

    return 0;
}