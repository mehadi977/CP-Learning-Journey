// Problem Link:https://www.codechef.com/problems/LMP2

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

void solve_Mehadi()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        yes;
        return;
    }
    map<char, int> mp;
    for (char a : s)
        mp[a]++;
    if (mp.size() == 1 && mp[s[0]] > 2)
        no;
    else
    {
        bool ok = true;
        for (auto [chr, cnt] : mp)
        {
            if (cnt > 2)
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
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_Mehadi();
    }

    return 0;
}