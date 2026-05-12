// Problem Link:https://codeforces.com/problemset/problem/1690/D

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
        int cnt = 0, mn = 1e9;
        int l = 0, r = 0;
        while (r < n)
        {
            if (s[r] == 'W')
                cnt++;
            if (r - l + 1 == k)
            {
                mn = min(mn, cnt);
                if (s[l] == 'W')
                    cnt--;
                l++;
            }
            r++;
        }
        cout << mn << endl;
    }

    return 0;
}
