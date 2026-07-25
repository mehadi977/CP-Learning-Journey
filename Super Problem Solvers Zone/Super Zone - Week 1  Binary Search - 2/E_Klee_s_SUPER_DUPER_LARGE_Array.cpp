// Problem Link:https://codeforces.com/problemset/problem/2009/E

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
ll n, k;
ll sum(ll f, ll s)
{
    if (f == s)
        return f;
    return ((f + s) * (s - f + 1)) / 2LL;
}
bool good1(ll mid)
{
    if (sum(k, mid) <= sum(mid + 1, k + n - 1))
        return true;
    else
        return false;
}
bool good2(ll mid)
{
    if (sum(k, mid - 1) >= sum(mid, k + n - 1))
        return true;
    else
        return false;
}

void solve__()
{

    cin >> n >> k;
    ll l1 = k, r1 = k + n - 1, mid1;
    while (l1 + 1 < r1)
    {
        mid1 = l1 + (r1 - l1) / 2;
        if (good1(mid1))
            l1 = mid1;
        else
            r1 = mid1;
    }

    ll l2 = k, r2 = k + n - 1, mid2;
    while (l2 + 1 < r2)
    {
        mid2 = l2 + (r2 - l2) / 2;
        if (good2(mid2))
            r2 = mid2;
        else
            l2 = mid2;
    }

    cout << min(abs(sum(l1 + 1, n + k - 1) - sum(k, l1)),
                abs(sum(k, r2 - 1) - sum(r2, n + k - 1)))
         << endl;
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