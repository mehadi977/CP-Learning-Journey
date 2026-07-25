// Problem Link:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/D

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
    ll m, n;
    cin >> m >> n;
    vector<tuple<ll, ll, ll>> a(n);
    for (int i = 0; i < n; i++)
    {
        ll t, z, y;
        cin >> t >> z >> y;
        a[i] = make_tuple(t, z, y);
    }
    vector<ll> can(n);

    auto ok = [&](ll mid)
    {
        vector<ll> may(n);
        ll has = m;
        for (int i = 0; i < n; i++)
        {
            tuple<ll, ll, ll> T = a[i];
            ll t, z, y, total, c, rem, curr;
            t = get<0>(T);
            z = get<1>(T);
            y = get<2>(T);
            total = ((t * z) + y);
            c = (mid / total);
            rem = mid % total;
            curr = ((c * z) + min(z, (rem / t)));
            curr = min(max(has, 0LL), curr);
            has -= curr;
            may[i] = curr;
        }
        if (!has)
        {
            for (ll i = 0; i < n; i++)
            {
                can[i] = may[i];
            }
        }
        return (!has);
    };

    ll l = 0, r = 1e8, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
    for (ll val : can)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}