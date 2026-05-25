// Problem Link:https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

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
    ll n, s;
    cin >> n >> s;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0, ans = 1e18;
    ll l = 0, r = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum >= s && l <= r)
        {
            ans = min(ans, r - l + 1);
        }
        while (sum >= s && l <= r)
        {
            sum -= v[l];
            l++;
            if (sum >= s && l <= r)
            {
                ans = min(ans, r - l + 1);
            }
        }

        r++;
    }
    if (ans == 1e18)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve_Mehadi();

    return 0;
}