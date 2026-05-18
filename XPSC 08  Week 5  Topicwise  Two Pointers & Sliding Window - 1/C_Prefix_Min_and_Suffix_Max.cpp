// Problem Link:https://codeforces.com/problemset/problem/2123/C

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
        vector<int> pre(n), suf(n);
        pre[0] = v[0];
        suf[n - 1] = v[n - 1];
        for (int i = 1; i < n; i++)
        {
            pre[i] = min(pre[i - 1], v[i]);
        }

        for (int i = n - 2; i >= 0; i--)
        {
            suf[i] = max(suf[i + 1], v[i]);
        }
        // for (int a : suf)
        //     cout << a << " ";
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (pre[i] < v[i] && suf[i] > v[i])
                ans.push_back('0');
            else
                ans.push_back('1');
        }

        cout << ans << endl;
    }

    return 0;
}
