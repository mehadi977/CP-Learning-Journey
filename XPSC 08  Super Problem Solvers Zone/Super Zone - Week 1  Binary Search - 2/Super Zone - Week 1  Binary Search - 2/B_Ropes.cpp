// Problem Link:

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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](double m)
    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += floor(v[i] / m);
        }
        return s >= k;
    };
    double l = 0, r = 1e8, mid, ans = 0;
    for (int i = 0; i < 100; i++)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid;
        }
        else
            r = mid;
    }

    cout << setprecision(10) << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}