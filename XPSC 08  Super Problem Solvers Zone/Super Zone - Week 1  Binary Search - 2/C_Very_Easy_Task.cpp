// Problem Link:https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C

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
    ll n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](ll m)
    {
        ll mn = min(x, y);
        if (m < mn)
            return false;

        m -= mn;
        return (m / x) + (m / y) + 1 >= n;
    };

    ll l = 1, r = 1, mid, ans = 0;
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
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}