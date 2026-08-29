// Problem Link:https://codeforces.com/problemset/problem/1867/B

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
    int mismatch = 0;
    int match = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            mismatch++;
        else
            match++;
    }
    // cout << mismatch << " " << match << endl;
    string ans;
    for (int i = 0; i <= n; i++)
    {
        if (i < mismatch || i > n - mismatch)
            ans.pb('0');

        else if (n % 2 == 0 && (i - mismatch) % 2 != 0)
            ans.pb('0');
        else
            ans.pb('1');
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