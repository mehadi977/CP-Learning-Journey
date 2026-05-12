// Problem Link:https://codeforces.com/problemset/problem/2000/D

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        // for (int x : a)
        //     cout << x << " ";
        // cout << endl;
        // cout << s << endl;
        // TLE ashe tai age prefix sum ber kore nibo
        vector<ll> psum(n, 0);
        psum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            psum[i] = psum[i - 1] + a[i];
        }
        // for (int a : psum)
        //     cout << a << " ";
        // cout << endl;

        int l = 0, r = n - 1;
        ll ans = 0;

        while (l < r)
        {
            while (l < n && s[l] != 'L')
                l++;
            while (r >= 0 && s[r] != 'R')
                r--;

            if (l < r)
            {
                if (l == 0)
                    ans += psum[r];
                else
                    ans += psum[r] - psum[l - 1];
                l++, r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
