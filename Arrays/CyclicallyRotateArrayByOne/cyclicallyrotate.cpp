/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = b-1; i > a; i--)

void solve()
{
    int n,i;
    cin >> n;
    vi a(n);
    rep(i, 0, n)
        cin >> a[i];
    rrep(i, 0, n)
        swap(a[i], a[i-1]);
    rep(i, 0, n)
        cout << a[i] << " ";
}

signed main(int argc, char const *argv[])
{
    fast;
    int tc; 
    cin >> tc;
    while(tc--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
