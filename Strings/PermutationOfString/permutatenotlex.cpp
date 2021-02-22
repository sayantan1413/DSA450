/*  Code by Sayantan Bose
    Time Complexity: O(n * n!)
    Space Complexity: O(1)
    Printed in non-lexclexicographically manner
*/
#include <bits/stdc++.h>
using namespace std;

void permutate(string &s, int l, int r)
{
    if (l == r)
        cout << s << " ";
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(s[l], s[i]);
            permutate(s, l + 1, r);
            swap(s[l], s[i]);
        }
    }
}

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
        permutate(s, 0, n - 1);
        cout << endl;
    }
    return 0;
}