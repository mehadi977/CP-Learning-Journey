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

void solve_Mehadi()
{

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    vector<ll> psum(n, 0);
    psum[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        psum[i] = psum[i - 1] + a[i];
    }
    int l = 0, r = n - 1;
    ll ans = 0;
    while (l < r)
    {
        while (l < n && s[l] != 'L')
            l++;
        while (r >= 0 && s[r] != 'R')
            r--;

        if (l < r)
        {
            if (l == 0)
                ans += psum[r];
            else
                ans += psum[r] - psum[l - 1];
            l++, r--;
        }
    }
    cout << ans << endl;
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