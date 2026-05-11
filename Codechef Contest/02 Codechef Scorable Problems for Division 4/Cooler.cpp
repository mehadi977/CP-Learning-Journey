// Problem Link:https://www.codechef.com/problems/COOLER7

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
        int n, m;
        cin >> n >> m;
        int ans = 0;
        for (int i = n; i > m; i--)
        {
            ans += i ;
        }
        cout << ans << endl;
    }

    return 0;
}
