// Problem Link:https://codeforces.com/problemset/problem/1843/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (ll x : a)
            sum += abs(x);

        int cnt = 0;
        bool neg = false;
        for (int i = 0; i <= n; i++)
        {
            if (neg)
            {
                if (i == n || a[i] > 0)
                {
                    cnt++;
                    neg = false;
                }
            }
            else
            {
                if (i < n && a[i] < 0)
                    neg = true;
            }
        }

        cout << sum << " " << cnt << endl;
    }

    return 0;
}
