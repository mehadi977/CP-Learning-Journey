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
    int x, y, z;
    cin >> x >> y >> z;
    if (y >= z)
    {
        cout << -1 << endl;
        return;
    }
    int income = 0;
    int ans = 0;
    while (income <= x)
    {
        if (income >= x)
            break;
        x += y;
        income += z;
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