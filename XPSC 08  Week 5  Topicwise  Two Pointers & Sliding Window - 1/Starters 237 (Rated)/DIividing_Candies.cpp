// Problem Link:https://www.codechef.com/START237D/problems/DIVKIDS
//C
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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        int mx=0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % x == 0)
                mx = v[i];
            ans = max(ans, mx);
        }
        cout << ans << endl;
    }

    return 0;
}
