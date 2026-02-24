#include <iostream>
#include <cmath>
using namespace std;
int isPossible(int mid, int n, int m)
{
    long long result = 1;
    for (int i = 0; i < n; i++)
    {
        result = result * mid; // here we multiply mid one by one

        if (result > m) // early stop
        {
            return 2; // means greater than m(mid ^ n > m)
        }
    }
    if (result == m)
    { // means mid ^ n == m
        return 0;
    }
    else
    { // means mid ^ n < m
        return 1;
    }
}
int findroot(int n, int m)
{
    int start = 0;
    int end = m;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossible(mid, n, m) == 0)
        {
            return mid; // exact root
        }
        else if (isPossible(mid, n, m) == 1)
        {
            start = mid + 1; // mid ^ n < m
        }
        else
        {
            // mid ^ n > m
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1; // if integer not exists
}
int main()
{
    int m = 27;
    int n = 3;
    int root = findroot(n, m);
    cout << "Answer is " << root << endl;
    return 0;
}