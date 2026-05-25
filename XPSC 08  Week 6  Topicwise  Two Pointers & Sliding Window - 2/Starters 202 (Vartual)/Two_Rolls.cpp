// Problem Link:https://www.codechef.com/problems/TWOROLL

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
    int x, y;
    cin >> x >> y;
  
    int need = 50 - x;
    bool ok = false;
    int sz1 = y + 5, sz2 = y + 5;
    for (int i = y; i <= sz1; i++)
    {
        for (int j = y; j <= sz2; j++)
        {
            if (i + j == need)
            {
                ok = true;
                break;
            }
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