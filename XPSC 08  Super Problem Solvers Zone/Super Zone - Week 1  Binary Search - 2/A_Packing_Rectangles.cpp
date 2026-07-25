// Problem Link:https://codeforces.com/edu/course/2/lesson/6/2

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
    ll w, h, n;
    cin >> w >> h >> n;

    auto ok = [&](ll m)
    {
        return (__int128_t)(m / w) * (m / h) >= n;
    };

    ll l = 0, r = 1, ans = 0, mid;
    while (!ok(r))
    {
        r *= 2;
    }

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}