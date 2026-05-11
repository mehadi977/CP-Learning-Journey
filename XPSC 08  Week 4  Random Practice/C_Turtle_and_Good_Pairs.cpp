// Problem Link:https://codeforces.com/problemset/problem/2003/C

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
        vector<pair<int, char>> fre(26);
        for (int i = 0; i < 26; i++)
        {
            fre[i].second = 'a' + i;
        }
        for (char c : s)
            fre[c - 'a'].first++;
        sort(fre.rbegin(), fre.rend());
        string ans(n, ' ');
        int idx = 0;
        for (auto [cnt, ch] : fre)
        {
            if (cnt == 0)
                break;
            for (int i = 0; i < cnt; i++)
            {
                if (idx >= n)
                    idx = 1;
                ans[idx] = ch;
                idx += 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
