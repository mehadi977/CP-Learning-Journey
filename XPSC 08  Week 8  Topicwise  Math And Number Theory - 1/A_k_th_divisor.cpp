// Problem Link:https://codeforces.com/problemset/problem/762/A

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
    ll n, k;
    cin >> n >> k;
    ll cnt = 0;
    vector<ll> ans;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans.pb(i);
            if (n / i != i)
                ans.pb(n / i);
        }
    }
    sort(all(ans));
    if (k > ans.size())
        cout << -1 << endl;
    else
        cout << ans[k - 1];
    // for (ll a : ans)
    //     cout << a << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}