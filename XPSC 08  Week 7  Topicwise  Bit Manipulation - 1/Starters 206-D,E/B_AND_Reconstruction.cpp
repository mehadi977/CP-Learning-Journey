// Problem Link:https://codeforces.com/problemset/problem/1991/B

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
    vector<int> b(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
    }
    vector<int> a;
    a.pb(b[0]);
    for (int i = 0; i < n - 1; i++)
    {
        a.back() = a.back() | b[i];
        a.pb(a.back() & b[i]);
    }
    bool flag = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] != (a[i] & a[i + 1]))
            flag = true;
    }
    if (flag)
    {
        cout << -1 << endl;
        return;
    }

    for (int x : a)
        cout << x << " ";
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