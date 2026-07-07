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
    int x, y;
    cin >> x >> y;
    int a = 2 * x, b = 2 * y;
    // cout << a << " " << b << endl;
    if (x >= b || y >= a)
    {
        cout << 0 << endl;
        return;
    }
    // else
    //     cout << 1 << endl;
    int mn = min(x, y), mx = max(x, y);
    int ans = 0;
    while (mn != 0)
    {
        if (mn * 2 <= mx)
            break;
        mn--;
        ans++;
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
        solve__();
    }

    return 0;
}