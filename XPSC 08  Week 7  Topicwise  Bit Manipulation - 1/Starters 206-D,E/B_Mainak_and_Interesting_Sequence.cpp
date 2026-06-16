// Problem Link:https://codeforces.com/problemset/problem/1726/B

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
    int n, s;
    cin >> n >> s;
    if (n > s)
    {
        no;
        return;
    }
    vector<int> ans(n, 1);
    // odd
    if (n % 2 == 1)
    {
        int extra = s - n;
        ans.back() += extra;
    }
    else
    {
        if (s % 2 == 0)
        {
            int extra = s - n;
            ans[0] += extra / 2;
            ans[1] += extra / 2;
        }
        else
        {
            no;
            return;
        }
    }
    yes;
    for (int a : ans)
        cout << a << " ";
    cout << endl;
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