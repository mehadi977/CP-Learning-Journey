// Problem Link: https://www.codechef.com/problems/RESELL

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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int ans = 0;
        for (int i = n - 1; k != 0; i--, k--)
        {
            if (v[i] - 5 > 0)
            {
                ans += v[i] - 5;
                v.pop_back();
            }
        }
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if (v[i] - 10 > 0)
                ans += v[i] - 10;
        }
        cout << ans
             << endl;
    }

    return 0;
}
