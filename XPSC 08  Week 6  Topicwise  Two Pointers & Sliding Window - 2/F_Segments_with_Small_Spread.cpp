// Problem Link:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/F

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

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<ll> ms;
    ll ans = 0, l = 0, r = 0;
    while (r < n)
    {
        ms.insert(a[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();
        if (mx - mn <= k)
            ans += (r - l + 1);
        else
        {
            while (*ms.rbegin() - *ms.begin() > k && l < r)
            {
                ms.erase(ms.find(a[l]));
                l++;
            }
            ll mn = *ms.begin(), mx = *ms.rbegin();
            if (mx - mn <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}