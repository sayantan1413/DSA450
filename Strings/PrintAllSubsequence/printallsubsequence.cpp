/*  Code by Sayantan Bose
    Time Complexity: O(2^n)
*/

#include <bits/stdc++.h>
using namespace std;
void printSubsequence(string s1, string s2)
{
    if (s1.empty())
    {
        cout << s2 << endl;
        return;
    }
    printSubsequence(s1.substr(1), s2);
    printSubsequence(s1.substr(1), s2 + s1[0]);
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
        string s1;
        string s2 = "";
        cin >> s1;
        printSubsequence(s1, s2);
    }
    return 0;
}