// Problem Link:https://www.codechef.com/problems/XORSUB7

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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        vector<int> key;
        for (auto a : mp)
            key.push_back(a.first);
        // for (int a : key)
        //     cout << a << " ";
        // cout << endl;
        int m = key.size();
        vector<int> dp(m);
        for (int i = 0; i < m; i++)
        {
            dp[i] = mp[key[i]];
        }
        for (int i = 1; i < m; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if ((key[i] & key[j]) == key[j])
                    dp[i] = max(dp[i], dp[j] + mp[key[i]]);
            }
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }

    return 0;
}
