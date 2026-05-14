// Problem Link:

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
        vector<int> cnt;
        for (auto [a, b] : mp)
            // cout << a << " " << b << endl;
            cnt.push_back(b);
        // sort(cnt.rbegin(), cnt.rend());
        int ans = 0;

        for (auto it = mp.rbegin(); it != mp.rend(); it++)
        // cout << a << " ";
        {
            if (k != 0)
            {
                ans += it->second;
                k--;
            }
        }

        if (ans > x)
            cout << x << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
