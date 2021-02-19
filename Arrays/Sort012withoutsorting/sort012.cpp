/*  Code by Sayantan Bose
    Time Complexity: O(n)
    Space Complexity: O(1)
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
        int n;
        cin >> n;
        int a[n];
        int count_0 = 0, count_1 = 0, count_2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                count_0++;
            else if (a[i] == 1)
                count_1++;
            else if (a[i] == 2)
                count_2++;
        }
        for (int i = 0; i < n; i++)
        {
            if (count_0 > 0)
            {
                a[i] = 0;
                count_0--;
            }
            else if (count_1 > 0)
            {
                a[i] = 1;
                count_1--;
            }
            else if (count_2 > 0)
            {
                a[i] = 2;
                count_2--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}