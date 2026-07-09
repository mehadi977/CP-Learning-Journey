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
        int r, y;
        cin >> r >> y;
        int ans = r + max(0, (y - r) / 2);
        cout << ans << endl;
    }

    return 0;
}
