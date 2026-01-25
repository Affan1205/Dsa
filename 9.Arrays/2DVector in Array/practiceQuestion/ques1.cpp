// 1️⃣ Declare a 2D vector with 3 rows and 4 columns, all values initialized to 0.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> arr(3, vector<int>(4, 0));// 3->no of rows && vector<int>(4, 0)->4 column in each row and all column is inialized by 0.

    return 0;
}