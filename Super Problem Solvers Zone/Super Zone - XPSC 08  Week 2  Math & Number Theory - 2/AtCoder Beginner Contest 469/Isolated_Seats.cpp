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
    cin >> s;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            bool lft = false;
            bool rt = false;
            if (i == 0 || s[i - 1] == 'x')
                lft = true;
            if (i == n - 1 || s[i + 1] == 'x')
                rt = true;
            if (lft && rt)
                ans++;
        }
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