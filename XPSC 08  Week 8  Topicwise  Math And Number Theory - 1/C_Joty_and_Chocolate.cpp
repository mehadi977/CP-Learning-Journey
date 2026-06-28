// Problem Link:https://codeforces.com/problemset/problem/678/C

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
ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b)) * b;
}
void solve__()
{
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll cnt1 = (n / a) * p, cnt2 = (n / b) * q, over = n / (LCM(a, b));

    ll ans = (cnt1 + cnt2) - (over * (p + q)) + over * (max(p, q));
    
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}