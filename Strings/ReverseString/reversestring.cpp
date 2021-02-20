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
        int begin = 0;
        int end = s.length() - 1;
        while (begin < end)
        {
            int temp = s[begin];
            s[begin++] = s[end];
            s[end--] = temp;
        }
        cout << s << endl;
    }
    return 0;
}