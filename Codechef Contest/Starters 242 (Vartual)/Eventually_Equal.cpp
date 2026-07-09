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
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    if (__gcd(a, c) == __gcd(b, c))
    {
        cout << 1 << endl;
    }
    else if (__gcd(a, c + 1) == __gcd(b, c + 1))
        cout << 2 << endl;
    else
        cout << 3 << endl;
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