// Problem Link:https://www.codechef.com/problems/AABBCCDD?tab=statement

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
        for (int i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] = s[i] + 32;
        }
        map<char, int> mp;
        for (char a : s)
            mp[a]++;

        int mx1 = 0;
        int mx2 = 0;
        for (auto [a, b] : mp)
        {
            if (b > mx1)
            {
                mx2 = mx1;
                mx1 = b;
            }
            else if (b > mx2)
                mx2 = b;
        }

        cout
            << mx1 + mx2 << endl;
    }

    return 0;
}
