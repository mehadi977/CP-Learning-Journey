// Problem Link: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/H

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// #define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve__()
{
    string st;
    cin >> st;
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll tk;
    cin >> tk;
    ll b = 0, s = 0, c = 0;
    for (char x : st)
    {
        if (x == 'B')
            b++;
        else if (x == 'S')
            s++;
        else
            c++;
    }

    auto ok = [&](ll mid)
    {
        __int128_t x = max((__int128_t)0, (__int128_t)b * mid - nb);
        __int128_t y = max((__int128_t)0, (__int128_t)s * mid - ns);
        __int128_t z = max((__int128_t)0, (__int128_t)c * mid - nc);
        __int128_t totalCst = (x * pb) + (y * ps) + (z * pc);
        return totalCst <= tk;
    };

    ll l = 0, r = 1e18, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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