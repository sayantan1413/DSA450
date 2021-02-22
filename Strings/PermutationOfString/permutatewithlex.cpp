/*  Code by Sayantan Bose
    Time Complexity: O(n * n!)
    Space Complexity: O(1)
    Printed in lexclexicographically manner
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
    string s;
    getline(cin, s);
    while (t--)
    {
        string str;
        getline(cin, str);
        sort(str.begin(), str.end());
        do
        {
            cout << str << " ";
        } while (next_permutation(str.begin(), str.end()));
        cout << endl;
    }
}