// Problem Link:https://www.codechef.com/problems/MODMIR
//upsolve
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
        ll n, m;
        cin >> n >> m;
        vector<int> ans;
        ans.push_back(0);
        ans.push_back(1);
        for (int i = 2; i <= n; i++)
        {
            int val = ans[i - 1] - ans[i - 2];
            // value negative hole +mod korte hoy
            if (val < 0)
                val += m;
            ans.push_back(val);
        }
        if (ans[n] != ans[n - 1])
            cout << -1 << endl;
        else
        {
            for (int i = 1; i <= n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
