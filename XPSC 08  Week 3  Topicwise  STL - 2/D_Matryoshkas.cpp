// Problem Link:https://codeforces.com/problemset/problem/1790/D

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
        vector<int> v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            // cin >> v[i];
        }
        // sort(v.begin(), v.end());
        int ans = 0;
        int pre_cnt = 0;
        int pre_val = 0;
        for (auto [a, cnt] : mp)
        {
            if (pre_val != a - 1)
                ans += cnt;
            else if (cnt > pre_cnt)
                ans += cnt - pre_cnt;
            pre_val = a;
            pre_cnt = cnt;
        }
        cout << ans << endl;
    }

    return 0;
}
