// Problem Link: https://codeforces.com/problemset/problem/1850/F

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
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    map<int, int> ans;
    for (int i = 1; i <= n; i++)
    {
        for (int multiple = i; multiple <= n; multiple += i)
        {
            ans[multiple] += mp[i];
        }
    }
    int cnt = 0;
    for (auto [a, b] : ans)
        // cout << a << " " << b << endl;
        cnt = max(cnt, b);
    cout << cnt << endl;
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