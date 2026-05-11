// Problem Link:https://www.codechef.com/problems/MOVHYPE
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
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 0; i < n + 1; i++)
        {
            cin >> v[i];
            // cout<<v[i]<<" ";
        }
        int mx = 0;
        int ans = INT_MAX;
        for (int i = 1; i < n + 1; i++)
        {
            int mx = max(v[i], v[i - 1]);
            ans = min(mx, ans);
            // cout << mx << " ";
        }

        cout << ans << endl;
    }

    return 0;
}
