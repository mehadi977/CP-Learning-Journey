// Problem Link:https://www.codechef.com/problems/FOODRES

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
bool check(ll mid, ll m, vector<ll> &v)
{
    ll tmp = 0;
    for (auto a : v)
        tmp += (a / mid);
    return (tmp >= m);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        // cout<<v[i];
    }
    ll lft = 1, rht = *max_element(v.begin(), v.end());
    ll ans = 0;
    while (lft <= rht)
    {
        ll mid = lft + (rht - lft) / 2;
        if (check(mid, m, v))
        {
            ans = mid;
            lft = mid + 1;
        }
        else
            rht = mid - 1;
    }
    cout << ans;

    return 0;
}
