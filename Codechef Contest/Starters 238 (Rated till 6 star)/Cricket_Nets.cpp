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
        int x;
        cin >> x;

        int ans = 0;

        if (x <= 20)
            ans = x * 10;
        else
        {
            ans = 20 * 10;
            int rem = x - 20;
            ans += (rem / 2) * 5;
        }
        cout << ans << endl;
    }

    return 0;
}
