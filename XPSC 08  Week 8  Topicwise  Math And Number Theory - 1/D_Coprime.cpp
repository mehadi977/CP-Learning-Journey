// Problem Link:https://codeforces.com/problemset/problem/1742/D

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
    map<int, int> idx;
    for (int i = 0; i < n; i++)
    {
        idx[v[i]] = max(idx[v[i]], i + 1);
    }
    vector<int> uniq;
    for (auto [a, b] : idx)
        uniq.pb(a);
    int ans = -1;
    for (int i = 0; i < uniq.size(); i++)
    {
        for (int j = 0; j < uniq.size(); j++)
        {
            int gc = __gcd(uniq[i], uniq[j]);
            if (gc == 1)
                ans = max(ans, idx[uniq[i]] + idx[uniq[j]]);
        }
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