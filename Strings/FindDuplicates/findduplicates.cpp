/*  Code by Sayantan Bose
    Time Complexity: O(nlogn)
    Space Complexity: O(k) k = size of the map
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
        bool flag = false;
        map<char, int> mp;
        for (int i = 0; i <= s.length() - 1; i++)
        {
            mp[s[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > 1)
            {
                flag = true;
                cout << it.first << " " << it.second << endl;
            }
        }
        if (flag == false)
        {
            cout << "0"
                 << " "
                 << "0" << endl;
        }
        else
            cout << endl;
    }
    return 0;
}