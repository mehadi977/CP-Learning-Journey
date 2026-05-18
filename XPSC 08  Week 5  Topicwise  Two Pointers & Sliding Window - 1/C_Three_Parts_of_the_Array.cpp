// Problem Link:https://codeforces.com/problemset/problem/1006/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    int l = 0, r = n - 1;
    ll sumL = 0, sumR = 0;

    while (l <= r)
    {
        if (sumL == sumR)
        {
            ans = max(ans, sumL);
            if (l < r)
            {
                sumL += a[l];
                l++;
                sumR += a[r];
                r--;
            }
            else
                break;
        }
        else if (sumL < sumR)
        {
            sumL += a[l];
            l++;
        }
        else
        {
            sumR += a[r];
            r--;
        }
    }
    if (sumL == sumR)
        ans = max(ans, sumL );
    cout
        << ans << endl;
    return 0;
}
