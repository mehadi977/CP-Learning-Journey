// Problem Link:https://codeforces.com/problemset/problem/1742/E

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
    int n, q;
    cin >> n >> q;
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

    vector<ll> ans(q);
    vector<pair<ll, ll>> k(q);
    for (int i = 0; i < q; i++)
    {
        ll x;
        cin >> x;
        k[i].first = x;
        k[i].second = i;
    }
    sort(all(k));
    ll s = -1;
    for (int i = 0; i < q; i++)
    {
        while (true)
        {
            if (s == n - 1 || v[s + 1] > k[i].first)
                break;
            s++;
        }
        if (s >= 0)
            ans[k[i].second] = pre[s];
        else
            ans[k[i].second] = 0;
    }
    for (auto a : ans)
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