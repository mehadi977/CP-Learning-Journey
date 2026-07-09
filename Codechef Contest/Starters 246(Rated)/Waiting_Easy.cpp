// Problem Link:

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
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n);
    pre[0] = v[0];
    for (ll i = 1; i < n; i++)
    {
        pre[i] = max(v[i], pre[i - 1]);
    }
    // for (ll a : pre)
    //     cout << a << " ";
    // cout << endl;

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += pre[i] - v[i];
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