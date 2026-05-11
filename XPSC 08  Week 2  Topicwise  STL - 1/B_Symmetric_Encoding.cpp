// Problem Link:https://codeforces.com/problemset/problem/1974/B

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
        string s;
        cin >> s;
        map<char, int> mp;
        // distinct char er jonno map
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        string r;
        for (auto [a, b] : mp)
            r.push_back(a);
        string r2 = r;
        reverse(r2.begin(), r2.end());
        vector<int> find_idx;
        for (int i = 0; i < n; i++)
        {
            int idx = r.find(s[i]);
            find_idx.push_back(idx);
        }
        // for (int a : find_idx)
        //     cout << a << " ";
        for (int a : find_idx)
            cout << r2[a];
        cout << endl;
    }

    return 0;
}
