// Problem Link:https://cses.fi/problemset/task/1095

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
int Power(int x, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        n >>= 1; // n/2
        x = 1LL * x * x % MOD;
    }
    return ans;
}
void solve__()
{

    int a, b;
    cin >> a >> b;
    cout << Power(a, b) << endl;
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