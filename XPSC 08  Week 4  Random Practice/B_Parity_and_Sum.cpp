// Problem Link:https://codeforces.com/problemset/problem/1993/B

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
        ll n;
        cin >> n;

        vector<ll> odd, even;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x % 2 == 0)
                even.push_back(x);
            else
                odd.push_back(x);
        }
        if (even.empty() || odd.empty())
            cout << 0 << endl;
        else
        {
            ll ans = 0;
            ll mx_odd = *max_element(odd.begin(), odd.end());
            sort(even.begin(), even.end());
            // cout << mx_odd << endl;
            int i = 0;
            for (auto a : even)
            {
                if (mx_odd > a)
                {
                    mx_odd += a;
                    ans++;
                    i++;
                }
                else
                {
                    ans += even.size() + 1 - i;
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
