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
    int n;
    cin >> n;
    vector<ll> h(n), l(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> l[i];
    }
    vector<ll> suff(n);
    suff[n - 1] = h[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = max(suff[i + 1], h[i]);
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll t;
        cin >> t;
        ll idex = upper_bound(all(l), t) - l.begin();
        cout << suff[idex] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}