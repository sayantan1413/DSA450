/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(1)
    Approach used : Two pointer concept
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int left = 0, right = n - 1;
        while (left <= right)
        {
            if (a[left] < 0 && a[right] < 0)
                left++;
            else if (a[left] >= 0 && a[right] < 0)
            {
                int temp = a[left];
                a[left] = a[right];
                a[right] = temp;
                left++;
                right--;
            }
            else if (a[left] >= 0 && a[right] >= 0)
            {
                right--;
            }
            else
            {
                left++;
                right--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}