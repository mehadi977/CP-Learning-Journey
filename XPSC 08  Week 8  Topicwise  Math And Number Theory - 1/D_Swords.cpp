// Problem Link:https://codeforces.com/problemset/problem/1216/D

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
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll x = *max_element(all(v));
    ll z = 0;
    vector<ll> rmv;
    for (ll a : v)
        rmv.pb(x - a);

    for (ll a : rmv)
        z = __gcd(z, a);

    ll chor = 0;
    for (ll a : rmv)
        chor += (a / z);
    cout << chor << " " << z;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}