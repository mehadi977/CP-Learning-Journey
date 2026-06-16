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

    string a = "ADVITIYA";
    string s;
    cin >> s;
    if (s == a)
    {
        cout << 0 << endl;
        return;
    }
    // cout << s;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < a[i])
        {
            ans += abs(a[i] - s[i]);
        }
        else if (s[i] > a[i])
        {
            int x = 'Z' - s[i];
            ans += (1+x + (a[i] - 'A'));
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