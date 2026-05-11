// Problem Link:https://codeforces.com/problemset/problem/2000/C

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << a[i] << " ";
        }
        // cout << endl;
        int m;
        cin >> m;
        while (m--)
        {
            string s;
            cin >> s;
            // cout << s << endl;
            if (s.size() != a.size())
                cout << "NO" << endl;
            else
            {
                map<char, int> mp;
                map<int, char> mp2;
                bool f = true;
                for (int i = 0; i < s.size(); i++)
                {
                    if (mp.find(s[i]) != mp.end() && mp[s[i]] != a[i])
                        f = false;
                    if (mp2.find(a[i]) != mp2.end() && mp2[a[i]] != s[i])
                        f = false;
                    mp[s[i]] = a[i];
                    mp2[a[i]] = s[i];
                }
                if (f)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }

    return 0;
}
