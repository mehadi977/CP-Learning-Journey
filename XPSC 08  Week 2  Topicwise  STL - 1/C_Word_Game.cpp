// Problem Link:https://codeforces.com/problemset/problem/1722/C

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
        map<string, vector<int>> mp;
        for (int i = 1; i <= 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
        vector<int> ans(4);
        for (auto [x, y] : mp)
        {
            if (y.size() == 1)

                ans[y[0]] += 3;
            else if (y.size() == 2)
            {
                ans[y[0]]++;
                ans[y[1]]++;
            }
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " -> ";
        //     for (auto a : y)
        //         cout << a << " ";
        //     cout << endl;
        // }
        // cout << endl;

        // for (auto a : ans)
        //     cout << a << " ";
        for (int i = 1; i <= 3; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
