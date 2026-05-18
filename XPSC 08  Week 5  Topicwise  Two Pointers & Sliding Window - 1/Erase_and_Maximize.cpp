// Problem Link:https://www.codechef.com/problems/DICEERMAX?tab=statement

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
        int n, s;
        cin >> n >> s;
        int x = max(s - (5 * n), 0);
        int ans = 5 * x + 6 * (n - x);
        cout << ans << endl;
    }

    return 0;
}
