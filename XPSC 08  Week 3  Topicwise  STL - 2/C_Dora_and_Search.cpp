// Problem Link:https://codeforces.com/problemset/problem/1793/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = 1, mx = n;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (v[i] == mx)
            {
                mx--;
                i++;
            }
            else if (v[i] == mn)
            {
                mn++;
                i++;
            }

            else if (v[j] == mx)
            {
                mx--;
                j--;
            }
            else if (v[j] == mn)
            {
                mn++;
                j--;
            }
            else
                break;
        }

        if (i >= j)
            cout << -1 << endl;
        else
            cout << i + 1 << " " << j + 1 << endl;
    }

    return 0;
}
