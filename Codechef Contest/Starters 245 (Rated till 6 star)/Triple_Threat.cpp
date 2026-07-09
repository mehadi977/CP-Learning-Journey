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
    int n, x;
    cin >> n >> x;
    string ans(3 * n, '0');
    int one = x, zero = (3 * n) - x;
    for (int i = 0; i < n; i++)
    {
        // ith position
        if (zero > 0)
        {
            ans[i] = '0';
            zero--;
        }
        else if (one > 0)
        {
            ans[i] = '1';
            one--;
        }
        // i+n position
        if (zero > 0)
        {
            ans[i + n] = '0';
            zero--;
        }
        else if (one > 0)
        {
            ans[i + n] = '1';
            one--;
        }
        // i+2*n position
        if (one > 0)
        {
            ans[i + 2 * n] = '1';
            one--;
        }
        else if (zero > 0)
        {
            ans[i + 2 * n] = '0';
            zero--;
        }
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