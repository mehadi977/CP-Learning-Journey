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
        int r, b, g;
        cin >> r >> b >> g;
        int mn = min(r, b);
         mn = min(mn, g);
        int ans = mn * 10 ;
        ans += (r - mn) * 3;
        ans += (b - mn) * 3;
        ans += (g - mn) * 3;
        cout << ans << endl;
    }

    return 0;
}
