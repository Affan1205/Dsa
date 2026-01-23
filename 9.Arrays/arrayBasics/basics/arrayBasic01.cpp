#include <iostream>
using namespace std;
int main()
{
    /*
    int arr[10]; // Declaration of Array
    int arr[5]={9,8,7,4,6};// Initialization of Array
    */
    /*
     int size = 10;
     int arr[6] = {60, 50, 40, 80, 30, 90};// it work
     int arr[] = {60, 50, 40, 80, 30, 90};// it work
     int arr[10] = {60, 50, 40, 80, 30, 90};// it print the element till we give after that it print 0.
     int arr[6] = {60, 50, 40, 80, 30, 10, 70, 20, 90};//Error - element cannot be more than array size.
     int arr[10] = {50, 4, 61, 73, 39, 43, 28, 16, 85, 65};
     //printing of Array
     for (int i = 0; i < size; i++)
     {
         cout << arr[i] << " ";
     }
 */
    // TAKING INPUT IN ARRAY
    int size = 10;
    int arr[10];
    cout << "Enter the inputs in array:";
    for (int i = 0; i < size; i++)
    {
        // Taking inputs
        cin >> arr[i];
        // Printing the inputs
        cout << arr[i] << endl;
    }

    return 0;
}