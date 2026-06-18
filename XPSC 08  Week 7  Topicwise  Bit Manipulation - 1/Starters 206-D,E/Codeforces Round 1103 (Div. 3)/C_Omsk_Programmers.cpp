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
    int a, b, x;
    cin >> a >> b >> x;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int ans = abs(a - b);
    int cnt = 0;
    while (a != b)
    {
        if (a > b)
        {
            a /= x;
            cnt++;
        }
        else
        {
            b /= x;
            cnt++;
        }
        int cur = abs(a - b) + cnt;
        ans = min(cur, ans);
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