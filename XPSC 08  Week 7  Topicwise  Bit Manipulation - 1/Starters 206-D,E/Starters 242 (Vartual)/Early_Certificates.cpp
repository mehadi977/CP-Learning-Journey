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
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    string ans = "";
    int len = min(n, m);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == t[i])
            ans.pb(s[i]);
        else
            break;
            // cerr<<i<<": F" << ans << endl;
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