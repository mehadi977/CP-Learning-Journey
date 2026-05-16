// Problem Link:https://www.codechef.com/problems/WECREC

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
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        // for (auto it = mp.rbegin(); it != mp.rend(); it++)
        // // cout << a << " ";
        // {
        //     if (k != 0)
        //     {
        //         ans += it->second;
        //         k--;
        //     }
        // }

        // if (ans > x)
        //     cout
        //         << x << endl;
        // else
        //     cout << ans << endl;

        // group k vector e rekhe
        vector<pair<int, int>> an;
        for (auto [a, b] : mp)
            an.push_back({a, b});
        sort(an.rbegin(), an.rend());
        // for (auto [a, b] : an)
        //     cout << a << " " << b << endl;

        for (int i = 0; i < min(k, (int)an.size()); i++)
        {
            ans += an[i].second;
        }
        cout << min(x, ans) << endl;
    }

    return 0;
}
