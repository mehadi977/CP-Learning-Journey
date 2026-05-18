// Problem Link: https://cses.fi/problemset/task/1660

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll cnt = 0;
    ll sum = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        if (r < n)
            sum += v[r];
        while(l <=r && sum > x)
        {
            sum -= v[l];
            l++;
        }
         if (l < n && sum == x)
        {
            cnt++;
            sum -= v[l];
            l++;
        }

        r++;
    }

    cout << cnt << endl;
    return 0;
}
