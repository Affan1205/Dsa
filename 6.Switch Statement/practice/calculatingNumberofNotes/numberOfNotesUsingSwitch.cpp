#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter and amount: ";
    cin >> n;
    int ans;
    if (n == 0)
    {
        cout << "0 notes" << endl;
    }

    else
    {
        switch (1)
        {
        case 1:
            if (n >= 500)
            {
                ans = n / 500;
                n = n - ans * 500;
            }
            cout << "number of 500 notes: " << ans << endl;

        case 2:
            if (n >= 100)
            {
                ans = n / 100;
                n = n - ans * 100;
            }
            cout << "number of 100 notes: " << ans << endl;

        case 3:
            if (n >= 50)
            {
                ans = n / 50;
                n = n - ans * 50;
            }
            cout << "number of 50 notes: " << ans << endl;
        case 4:
            if (n >= 20)
            {
                ans = n / 20;
                n = n - ans * 20;
            }
            cout << "number of 20 notes: " << ans << endl;
        case 5:
            if (n >= 10)
            {
                ans = n / 10;
                n = n - ans * 10;
            }
            cout << "number of 10 notes: " << ans << endl;
        case 6:
            if (n >= 5)
            {
                ans = n / 5;
                n = n - ans * 5;
            }
            cout << "number of 5 notes: " << ans << endl;
        case 7:
            if (n >= 1)
            {
                ans = n / 1;
                n = n - ans * 1;
            }
            cout << "number of 1 notes: " << ans << endl;

        default:
            break;
        }
    }

    return 0;
}