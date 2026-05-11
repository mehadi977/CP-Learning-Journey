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
        int a, b;
        cin >> a >> b;
        int mn = min(a, b);
        int mx = max(a, b);
        bool ok = false;
        while (mn <= mx)
        {

            if (mn == mx)
            {
                ok = true;
                break;
            }

            mn *= 2;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
