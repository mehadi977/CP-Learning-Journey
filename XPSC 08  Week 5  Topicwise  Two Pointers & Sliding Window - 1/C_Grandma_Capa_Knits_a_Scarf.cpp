// Problem Link: https://codeforces.com/problemset/problem/1582/C

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
        int ans = 1e9;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int cnt = 0;
            bool possible = true;
            int l = 0, r = n - 1;
            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {
                    if (s[l] == c)
                    {
                        l++;
                        cnt++;
                    }
                    else if (s[r] == c)
                    {
                        r--;
                        cnt++;
                    }
                    else
                    {
                        possible = false;
                        break;
                    }
                }
            }
            if (possible)
                ans = min(cnt, ans);
        }
        if (ans == 1e9)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
