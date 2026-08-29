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
    string s;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        mp[s]++;
    }
    int ans = 0;
    for (auto [s, cnt] : mp)
    {
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}