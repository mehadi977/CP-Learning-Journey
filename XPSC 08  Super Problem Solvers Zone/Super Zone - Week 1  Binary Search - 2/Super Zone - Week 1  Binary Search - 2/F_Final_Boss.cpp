// Problem Link:https://codeforces.com/problemset/problem/1985/F

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve__()
{
    ll h, n;
    cin >> h >> n;
    vector<ll> a(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    auto ok = [&](ll mid, ll n, ll h, vector<ll> &a, vector<ll> &c)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt = min(cnt + (1 + (mid - 1) / c[i]) * a[i], h);
        }
        return cnt >= h;
    };

    ll l = 1, r = 1e12, mid, ans=0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid, n, h, a, c))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}