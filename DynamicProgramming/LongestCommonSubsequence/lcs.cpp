/*  Code by Sayantan Bose
    Time Complexity: O(n^2)
    Space Complexity: O(n^2)
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.length();
        int m = s2.length();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }
        for (int j = 0; j <= m; j++)
        {
            dp[0][j] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}