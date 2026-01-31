#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void findFactorial(int num)
{
    vector<int> ans;
    ans.push_back(1);
    for (int i = 2; i <= num; i++) {
        int carry = 0;
        
        // Multiply 'i' with every digit currently in 'ans'
        for (int j = 0; j < ans.size(); j++) {
            int val = ans[j] * i + carry;
            ans[j] = val % 10;  // Update the current digit
            carry = val / 10;   // Update carry for next digit
        }
        
        // After multiplying all digits, handle the remaining carry
        while (carry) {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
    }

    reverse(ans.begin(), ans.end());
    for (int x : ans) cout << x;
    cout << endl;

}
int main()
{
    int num;
    cout << "Enter the number for factorial :";
    cin >> num;
    findFactorial(num);
    return 0;
}