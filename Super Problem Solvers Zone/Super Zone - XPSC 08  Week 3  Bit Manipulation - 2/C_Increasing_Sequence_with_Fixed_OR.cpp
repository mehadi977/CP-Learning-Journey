// Problem Link:https://codeforces.com/problemset/problem/1988/C

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

    vector<ll> ans;
    ans.pb(n);
    vector<ll> bit;
    int lm = __lg(n);
    for (ll i = 0; i <= lm; i++)
    {
        if ((n >> i) & 1)
        {
            ll val = (n - (1LL << i));
            if (val > 0)
                ans.pb(val);
        }
    }

    reverse(all(ans));
    cout << ans.size() << endl;
    for (ll a : ans)
        cout << a << " ";
    cout << endl;
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