/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(1)
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
        int maxi = a[0];
        int mini = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > maxi)
            {
                maxi = a[i];
            }
            else if (a[i] < mini)
            {
                mini = a[i];
            }
        }
        cout << maxi << " " << mini << endl;
    }
    return 0;
}