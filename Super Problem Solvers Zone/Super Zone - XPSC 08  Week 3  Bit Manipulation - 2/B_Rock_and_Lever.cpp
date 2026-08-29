// Problem Link:https://codeforces.com/problemset/problem/1420/B

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
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<ll> cnt(32);

    for (int i = 0; i < n; i++)
    {
        cnt[__lg(v[i])]++;
    }
    ll ans = 0;
    for (ll x : cnt)
    {
        // cout << x << " ";

        ans += ((x * (x - 1)) / 2);
    }
    // cout << endl;

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