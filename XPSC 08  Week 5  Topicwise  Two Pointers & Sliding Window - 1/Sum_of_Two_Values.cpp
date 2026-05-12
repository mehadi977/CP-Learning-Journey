// Problem Link:https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<pair<ll, ll>> p;
    for (int i = 0; i < n; i++)
    {
        p.push_back({v[i], i + 1});
    }
    sort(p.begin(), p.end());
    // for (auto [val, idx] : p)
    // {
    //     cout << val << " " << idx << endl;
    // }
    int l = 0, r = n - 1;
    bool ok = false;
    int ansL, ansR;
    while (l < r)
    {
        ll sum = p[l].first + p[r].first;
        if (sum == x)
        {
            ok = true;
            ansL = p[l].second, ansR = p[r].second;
            break;
        }
        else if (sum > x)
            r--;
        else if (sum < x)
            l++;
    }
    if (ok)
        cout << min(ansL, ansR) << " " << max(ansL, ansR) << endl;
    else
        cout << "IMPOSSIBLE" << endl;
    return 0;
}
