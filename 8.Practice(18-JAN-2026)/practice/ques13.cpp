/*3️⃣ Power Function (Without pow)*/
#include <iostream>
using namespace std;
int main()
{
    int num, power;
    cin >> num >> power;
    double ans = 1;
    int p = power;
    if (power < 0)
        p = -power;

    for (int i = 1; i <= p; i++)
    {
        ans = ans * num;
    }
    if (power < 0)
    {
        ans = 1 / ans;
    }

    cout << ans;

    return 0;
}