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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool ok = true;
    vector<int> x = v;
    reverse(all(x));
    if (x == v)
    {
        yes;
        return;
    }
    int mx = 1e9;
    int mn = -1e9;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (v[i] == v[j])
            continue;
        if (abs(v[i] - v[j]) != 2)
        {
            ok = false;
            break;
        }
        int choto = min(v[i], v[j]);

        mn = max(mn, choto);
        mx = min(mx, choto+ 1);
    }
    if (ok && mn <= mx)
        yes;
    else
        no;
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