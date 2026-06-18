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
    vector<char> a(6);
    int cnt = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    // cout << endl;
    bool ok = false;
    for (int i = 0; i <= 3; i++)
    {
        if (a[i] == 'W' && a[i + 1] == 'W' && a[i + 2] == 'W')
            ok = true;
    }
    if (ok)
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