// Problem Link:https://codeforces.com/problemset/problem/1840/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        ll seg = 0;

        for (ll i = 0; i < n; i++)
        {
            if (v[i] <= q)
                seg++;
            else
            {
                if (seg >= k)
                {
                    ll x = seg - k + 1;
                    ans += ((x * (x + 1)) / 2);
                }
                seg = 0;
            }
        }
        if (seg >= k)
        {
            ll x = seg - k + 1;
            ans += ((x * (x + 1)) / 2);
        }

        cout << ans << endl;
    }

    return 0;
}
