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

void solve_Mehadi()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<ll, ll> fre;
    ll ans = 0, l = 0, r = 0;
    while (r < n)
    {
        fre[v[r]]++;
        if (fre.size() <= k)
        {
            ans += (r - l + 1);
        }
        while (fre.size() > k && l <= r)
        {
            fre[v[l]]--;
            if (fre[v[l]] == 0)
                fre.erase(v[l]);
            l++;
            if (fre.size() <= k)
            {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_Mehadi();

    return 0;
}