// Problem Link: 

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
      ll x, y;
    cin >> x >> y;
    if (y == 1)
    {
        no;
        return;
    }

    ll a = x;
    ll b = x * y;
    ll c = a + b;
    yes;
    cout << a << " " << b << " " << c << endl;
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