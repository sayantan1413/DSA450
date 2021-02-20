/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(1)
    Approach used : Kadane's Algorithm
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
        int res = a[0];
        int maxEnding = a[0];
        for (int i = 1; i < n; i++)
        {
            maxEnding = max(maxEnding + a[i], a[i]);
            res = max(maxEnding, res);
        }
        cout << res << endl;
    }
}