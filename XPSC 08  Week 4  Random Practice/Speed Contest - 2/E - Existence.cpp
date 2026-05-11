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
        ll x, y;
        cin >> x >> y;
        if (x*x == 2*y)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
