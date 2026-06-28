// Problem Link:https://codeforces.com/problemset/problem/1872/C

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
    int l, r;
    cin >> l >> r;
    for (int n = l; n <= r; n++)
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                cout << i << " " << n - i << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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