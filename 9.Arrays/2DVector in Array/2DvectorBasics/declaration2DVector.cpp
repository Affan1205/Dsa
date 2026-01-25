#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // DECLARATION OF VECTOR OF VECTOR

    // vector<vector<int>> arr;//Empty vector;
    // vector<vector<int>> arr(3,vector<int>(4));//vector of 3 rows and 4 columns in each is declared
    // vector<vector<int>> arr(3, vector<int>(4, 0)); // vector of 3 rows and 4 columns(and all intialized by 0) in eachis declared
    cout<<"\n------------------"<<endl;

    // INITIALIZATION OF VECTOR OF VECTOR

    vector<vector<int>> arr={{2, 1, 3}, {5, 1, 7}, {8, 4, 6}};

    return 0;
}