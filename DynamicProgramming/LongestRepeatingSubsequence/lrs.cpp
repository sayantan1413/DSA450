/*  Code by Sayantan Bose
    Time Complexity: O(n^2)
    Space Complexity: O(n^2)
    Approach used : longest common subsequence
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
        string s;
        cin >> s;
        int n = s.length();
        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }
        for (int j = 0; j <= n; j++)
        {
            dp[0][j] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (s[i - 1] == s[j - 1] && i != j)
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        cout << dp[n][n] << endl;
    }
    return 0;
}
