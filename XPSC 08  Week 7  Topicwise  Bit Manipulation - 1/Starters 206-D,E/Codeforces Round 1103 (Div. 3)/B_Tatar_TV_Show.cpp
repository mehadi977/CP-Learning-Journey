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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool ok = true;
    for (int i = 0; i <k; i++)
    {
        int one = 0;
        for (int j = i; j < n; j += k)
        {
            if (s[j] == '1')
                one++;
        }
        if (one % 2 == 1)
        {
            ok = false;
            break;
        }
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