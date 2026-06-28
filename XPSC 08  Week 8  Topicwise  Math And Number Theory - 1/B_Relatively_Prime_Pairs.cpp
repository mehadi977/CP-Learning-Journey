// Problem Link:https://codeforces.com/problemset/problem/1051/B

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
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    for (ll i = l; i < r; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}