// Problem Link: https://codeforces.com/problemset/problem/1389/A

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
    int l, r;
    cin >> l >> r;
    if (r % l == 0)
    {
        cout << l << " " << r << endl;
        return;
    }
    if (l * 2 < r)
        cout << l << " " << l * 2 << endl;
    else
        cout << -1 << " " << -1 << endl;
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