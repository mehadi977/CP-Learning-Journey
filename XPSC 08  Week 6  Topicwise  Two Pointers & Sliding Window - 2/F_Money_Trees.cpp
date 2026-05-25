// Problem Link:https://codeforces.com/problemset/problem/1873/F

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
    int n, k;
    cin >> n >> k;
    vector<int> a(n), h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    ll sum = a[0], ans = 0, l = 0, r = 1;
    if (sum <= k)
        ans = 1;
    while (r < n)
    {
        if (h[r - 1] % h[r] == 0)
        {
            sum += a[r];
        }
        else
        {
            sum = a[r];
            l = r;
        }
        while (sum > k)
        {
            sum -= a[l];
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_Mehadi();
    }

    return 0;
}