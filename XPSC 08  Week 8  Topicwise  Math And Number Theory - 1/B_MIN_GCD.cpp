// Problem Link:https://codeforces.com/problemset/problem/2084/B

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
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(all(v));
    ll mn = v[0];

    vector<ll> multiple;
    for (int i = 1; i < n; i++)
    {
        if (v[i] % mn == 0)
            multiple.push_back(v[i]);
    }

    ll gc = 0;
    for (ll a : multiple)
    {
        gc = __gcd(gc, a);
    }
    if (gc == mn)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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