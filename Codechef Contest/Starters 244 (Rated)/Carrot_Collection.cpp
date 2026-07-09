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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int lft = 0, rt = 0;
    for (int i = 0; i < l-1; i++)
    {
        lft += v[i];
    }
    for (int i = r ; i < n; i++)
    {
        rt += v[i];
    }
    cout << max(lft, rt) << endl;
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