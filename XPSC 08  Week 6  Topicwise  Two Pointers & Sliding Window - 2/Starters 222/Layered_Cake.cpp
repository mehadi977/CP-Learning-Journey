// Problem Link:https://www.codechef.com/problems/LAYERCAKE

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

void solve()
{
    int n, m;
    cin >> n >> m;
    map<int, int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b[x]++;
    }
    int ans = 0;
    for (auto [x, y] : a)
    {
        for (auto [bx, by] : b)
        {
            if (bx < x)
                ans += (y * by);
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
        solve();
    }

    return 0;
}

