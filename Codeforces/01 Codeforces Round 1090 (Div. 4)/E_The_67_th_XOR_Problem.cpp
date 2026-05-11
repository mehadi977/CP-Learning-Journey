// Problem Link:

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
            // cout << v[i] << " ";
        }
        int ans = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         ans = max(ans, v[i] ^ v[j]);
        //     }
        // }
        for (int a : v)
        {
            for (int b : v)
                ans = max(ans, a ^ b);
        }

        cout << ans << endl;
    }

    return 0;
}
