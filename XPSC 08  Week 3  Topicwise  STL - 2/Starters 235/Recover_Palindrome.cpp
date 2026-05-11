// Problem Link:https://www.codechef.com/problems/P2235

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
        int l = 0, r = n - 1;
        string ans;
        while (l <= r)
        {
            if (l == r)
            {
                if (s[l] == '?')
                    ans = "NO";
                else
                    ans = "YES";
            }
            if (s[l] == '?' && s[r] == '?')
            {
                ans = "NO";
                break;
            }

            else
            {
                ans = "YES";
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
