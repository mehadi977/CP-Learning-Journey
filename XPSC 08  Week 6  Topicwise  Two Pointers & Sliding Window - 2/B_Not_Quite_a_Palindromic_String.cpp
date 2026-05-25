// Problem Link:https://codeforces.com/problemset/problem/2114/B

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
    int cnt0 = 0, cnt1 = 0;
    for (char a : s)
    {
        if (a == '0')
            cnt0++;
        else
            cnt1++;
    }
    int dif = abs(cnt0 - cnt1);
    int mn = dif / 2;
    if (k < mn)
        no;
    else if ((k - mn) % 2 == 0)
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