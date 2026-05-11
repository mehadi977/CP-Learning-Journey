// Problem Link:https://codeforces.com/problemset/problem/1665/B

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
            cin >> v[i];
            mp[v[i]]++;
        }
        int mx_fre = 0;
        for (auto [a, b] : mp)
            mx_fre = max(mx_fre, b);
        int ans = 0;
        while (mx_fre < n)
        {
            int rem = n - mx_fre;
            ans++;
            int can_take = mx_fre;
            ans += min(can_take, rem);
            mx_fre += min(can_take, rem);
        }

        cout << ans << endl;
    }

    return 0;
}
