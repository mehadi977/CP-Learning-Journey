// Problem Link:https://cses.fi/problemset/task/1620

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
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](ll sec)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (sec / v[i]);
            if (cnt >= t)
                return true;
        }
        // return cnt >= t;
        return false;
    };

    ll l = 1, r = 1e18, mid, ans;
    while (l <= r)
    {
        // mid = (l + r) / 2;
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}