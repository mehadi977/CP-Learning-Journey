// Problem Link:https://codeforces.com/problemset/problem/1873/D

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = 0;
        int cnt = 0;
        while (l < n)
        {
            if (l < n && s[l] == 'B')
            {
                cnt++;
                l += k;
            }
            else
                l++;
        }

        cout << cnt << endl;
    }
    return 0;
}
