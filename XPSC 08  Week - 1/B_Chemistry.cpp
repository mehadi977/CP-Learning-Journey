// Problem Link:https://codeforces.com/problemset/problem/1883/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        // sort(s.begin(), s.end());
        // cout << s << endl;
        map<char, int> mp;
        for (char a : s)
            mp[a]++;
        // for (auto a : mp)
        // {
        //     cout << a.first << " " << a.second << endl;
        // }
        bool flag = false;
        if (n == 1)
            flag = true;
        else
        {
            int odd_cnt = 0;
            for (auto a : mp)
            {
                if (a.second % 2 == 1)
                    odd_cnt++;
            }
            if (odd_cnt < 2)
                flag = true;
            else if (odd_cnt - k < 2)
                flag = true;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
