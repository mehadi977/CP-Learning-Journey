// Problem Link:https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    ll ans = 0;
    if (a > c)
        cout << 0;
    else
    {
        for (ll i = 1; i <= c; i++)
        {
            if (i % a == 0)
            ans += b;
        }
        cout << ans;
    }
    return 0;
}
