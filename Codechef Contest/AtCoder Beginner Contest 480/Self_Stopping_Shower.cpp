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
    ll n, k, t;
    cin >> n >> k >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    ll curnt = 0, ans = 0;
    for (int i = 0; i < n && curnt < t; i++)
    {
        ll targt = min(v[i], t);
        if (curnt < targt)
        {
            ll need = (targt - curnt + k - 1) / k;
            curnt += need * k;
            ans += need;
        }
        curnt = max(curnt, v[i] + k);
    }
    if (curnt < t)
    {
        ll need = (t - curnt + k - 1) / k;
        ans += need;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}