// 9️⃣ Print only the first row
#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {{1, 7, 6}, {5, 9, 0}, {3, 8, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}