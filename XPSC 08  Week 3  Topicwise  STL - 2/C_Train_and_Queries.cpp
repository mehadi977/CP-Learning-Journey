// Problem Link:https://codeforces.com/problemset/problem/1702/C

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
        int n, m;
        cin >> n >> m;
        map<int, set<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a].insert(i);
        }
        // for (auto [a, b] : mp)
        // {
        //     cout << a << "-> ";
        //     for (auto x : b)
        //         cout << x << " ";
        //     cout << endl;
        // }
        while (m--)
        {
            int l, r;
            cin >> l >> r;
            if (mp.find(l) == mp.end() || mp.find(r) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int start, end;
                start = *mp[l].begin();
                end = *mp[r].rbegin();
                if (start < end)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}
