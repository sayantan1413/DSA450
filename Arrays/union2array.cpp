#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int> 
#define rep(i, a, b) for(int i=a; i<b; i++)
#define se set<int>
#define pb push_back
#define ll long long int

void solve()
{
    int n,m,i;
    cin >> n >> m;
    vi a(n), b(n);
    se ans;
    rep(i, 0, n)
    {
        cin >> a[i];
        ans.insert(a[i]);
    }
    rep(i, 0, m)
    {
        cin >> b[i];
        ans.insert(b[i]);
    }
    cout << ans.size() << endl;
}

signed main(int argc, char const *argv[])
{
    fast_io;
    int tc;
    cin >> tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}
