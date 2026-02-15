#include <vector>
#include <iostream>
using namespace std;
int findOddOccurring(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        else if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                // hum ans ke left mein khade side
                start = mid + 2; // +2 isliye kyuki hum already mid +1 check kr chuke ha
            }
            else if (arr[mid] != arr[mid + 1])
            {
                // yah toh hum ans mein khade hn ya right side mein ha
                end = mid;
            }
        }
        else if (mid % 2 != 0)
        {
            if (arr[mid] == arr[mid - 1])
            {
                // hum left side mein khade hain
                start = mid + 1;
            }
            else if (arr[mid] != arr[mid - 1])
            {
                // right side mein hain humein left side jana ha
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};
    int ans = findOddOccurring(arr);
    cout << "Index is => " << ans << endl;
    cout << "Value is => " << arr[ans];
    return 0;
}