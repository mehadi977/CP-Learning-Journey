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
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    string ans = "Alice";
    if (x > a)
        ans = "Alice";
    else if (a > x)
        ans = "Bob";
    else if (y > b)
        ans = "Alice";
    else if (b > y)
        ans = "Bob";
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}