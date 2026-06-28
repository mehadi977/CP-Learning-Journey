// Problem Link:https://codeforces.com/problemset/problem/1618/C

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
    ll GCD1 = 0, GCD2 = 0;
    for (int i = 0; i < n; i += 2)
    {
        GCD1 = __gcd(GCD1, v[i]);
    }
    for (int i = 1; i < n ; i += 2)
    {
        GCD2 = __gcd(GCD2, v[i]);
    }
    // cout << GCD1 << " "
    //      << GCD2 << endl;
    ll ans = 0;
    bool a = true;
    for (int i = 0; i < n; i += 2)
    {
        if (v[i] % GCD2 == 0)
        {
            a = false;
            break;
        }
    }
    if (a)
        ans = GCD2;
    bool b = true;
    for (int i = 1; i < n ; i += 2)
    {
        if (v[i] % GCD1 == 0)
        {
            b = false;
            break;
        }
    }
    if (b)
        ans = GCD1;
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