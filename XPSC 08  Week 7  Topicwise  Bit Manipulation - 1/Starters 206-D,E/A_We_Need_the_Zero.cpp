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
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = a[0];
    for (int i = 1; i < n; i++)
    {
        x = (x ^ a[i]);
    }
    // cout << x << endl;
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = x ^ a[i];
        // cout << b[i] << " ";
    }
    int y = b[0];
    for (int i = 1; i < n; i++)
    {
        y = b[i] ^ y;
    }
    if (y == 0)
        cout << x << endl;
    else
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