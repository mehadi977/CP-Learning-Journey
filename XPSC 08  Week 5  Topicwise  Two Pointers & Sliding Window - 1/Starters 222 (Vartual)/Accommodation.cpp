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
        ll b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;
        // cout << b << g << x << y << n<<" ";
        ll min_req = (b + g + n-1) / n;
        ll max_posible = min(b / x, g / y);
        if (max_posible >= min_req)
            cout << min_req << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
