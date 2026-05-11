// Problem Link:https://codeforces.com/problemset/problem/1806/B

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
        map<int, int> mp;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        // for (auto [a, b] : mp)
        //     cout << a << " " << b << endl;
        // cout << endl;
        int zero = mp[0];
        int non_zro = n - zero;
        int other = n - zero - mp[1];
        int ans;
        if (zero == 0)
            ans = 0;
        if (non_zro >= zero - 1)
            ans = 0;
        else
        {
            if (other >= mp[1] + 1)
                ans = 1;
            else
            {
                int mx = *max_element(v.begin(), v.end());
                if (mx == 1)
                    ans = 2;
                else
                    ans = 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
