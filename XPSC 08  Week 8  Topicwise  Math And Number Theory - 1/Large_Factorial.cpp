// Problem Link:https://phitron.io/xpsc395/video/xpsc395-10-large-factorial?milestoneId=6a2c281f1f186f8d7477c7ae

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
const int MOD = 1e9 + 7;
void solve__()
{
    //(a*b)%MOD
    // or, (a%MOD*b%MOD)%MOD
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (1LL * ans % MOD * i % MOD) % MOD;
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