// Problem Link:https://cses.fi/problemset/task/1641

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
    vector<pair<ll, ll>> p;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        p.push_back({a, i + 1});
    }
    sort(p.begin(), p.end());
    // for (auto [val, idx] : p)
    //     cout << val << " " << idx << endl;
    set<ll> ans;

    bool ok = false;
    for (int i = 0; i < n - 1; i++)
    {
        ll l = i + 1, r = n - 1;
        while (l < r)
        {
            ll sum = p[i].first + p[l].first + p[r].first;
            if (sum == x)
            {
                ok = true;
                ans.insert(p[i].second);
                ans.insert(p[l].second);
                ans.insert(p[r].second);
                break;
            }
            else if (sum > x)
                r--;
            else
                l++;
        }
        if (ok)
            break;
    }
    if (ok)
        for (int a : ans)
            cout << a << " ";
    else
        cout << "IMPOSSIBLE";
    return 0;
}
