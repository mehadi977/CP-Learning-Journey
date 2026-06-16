// Problem Link:https://www.codechef.com/problems/ALIENOR

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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    // for (auto a : s)
    //     cout << a << endl;
    string target(k, '0');
    bool all = true;
    for (int i = 0; i < k; i++)
    {
        bool ok = false;
        target[i] = '1';
        for (auto a : s)
        {
            if (a == target)
                ok = true;
        }
        if (ok == false)
            all = false;
        // cout << target << endl;
        target[i] = '0';
    }
    if (all)
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