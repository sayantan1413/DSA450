/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(n)
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
        int rMax[n], lMax[n], res = 0;
        lMax[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            lMax[i] = max(a[i], lMax[i - 1]);
        }
        rMax[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            rMax[i] = max(a[i], rMax[i + 1]);
        }
        for (int i = 1; i < n; i++)
        {
            res += (min(rMax[i], lMax[i])) - a[i];
        }
        cout << res << endl;
    }
}