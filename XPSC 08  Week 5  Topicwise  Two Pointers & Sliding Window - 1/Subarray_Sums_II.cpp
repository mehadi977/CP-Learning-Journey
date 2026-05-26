// Problem Link: https://cses.fi/problemset/task/1660

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    ll cnt = 0;
    map<ll, ll> mp;
    mp[0] = 1;
    for (int r = 0; r < n; r++)
    {
        ll y = pre[r] - x;
        if (mp.find(y) != mp.end())
            cnt += mp[y];
        mp[pre[r]]++;
    }

    cout << cnt << endl;
    return 0;
}
