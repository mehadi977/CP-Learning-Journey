// Problem Link:https://codeforces.com/problemset/problem/2020/C

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
bool is_kth_bit_on(ll n, ll k)
{
    return ((n >> k) & 1);
}
ll turn_on_kth_bit(ll n, ll k)
{
    return (n | (1LL << k));
}
ll turn_off_kth_bit(ll n, ll k)
{
    return (n & (~(1LL << k)));
}
void solve__()
{
    ll b, c, d;
    cin >> b >> c >> d;
    ll a = b;
    int MSB = max({__lg(d), __lg(b), __lg(c)});
    for (int k = 0; k <= MSB; k++)
    {
        if (!is_kth_bit_on(b, k) && is_kth_bit_on(d, k))
        {
            a = turn_on_kth_bit(a, k);
        }
        if (is_kth_bit_on(c, k) && is_kth_bit_on(d, k))
        {
            a = turn_off_kth_bit(a, k);
        }
    }
    if (((a | b) - (a & c)) == d)
        cout << a << endl;
    else
        cout << -1 << endl;
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