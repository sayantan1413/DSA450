/*  Code by Sayantan Bose
    Time Complexity: O(length of s)
    Space Complexity: O(1)
    Approach used : Two pointer concept
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
        bool flag = true;
        int begin = 0;
        int end = s.length() - 1;
        while (begin < end)
        {
            if (s[begin] != s[end])
            {
                flag = false;
            }
            begin++;
            end--;
        }
        if (flag)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}