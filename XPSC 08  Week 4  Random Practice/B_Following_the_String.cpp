// Problem Link:https://codeforces.com/problemset/problem/1927/B

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
        string s = "";
        map<char, int> mp;
        int alp = 0;
        for (int i = 0; i < n; i++)
        {

            if (v[i] == 0)
            {
                s.push_back(alp + 'a');
                mp[alp + 'a']++;
            }
            else
            {
                for (auto [c, cnt] : mp)
                {
                    if (cnt == v[i])
                    {
                        s.push_back(c);
                        mp[c]++;
                        alp--;
                        break;
                    }
                }
            }
            if (alp + 'a' == 'z')
                alp = 0;
            else
                alp++;
        }
        cout << s << endl;
    }

    return 0;
}
