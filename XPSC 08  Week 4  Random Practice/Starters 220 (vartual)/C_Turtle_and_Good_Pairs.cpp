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
        map<char, int> mp;
        string ans = "";
        for (char c : s)
        {
            mp[c]++;
            if (ans.back() != c)
                ans.push_back(c);
            else
            {
                
            }
        }
        // cout << s.back() << endl;
    }

    return 0;
}
