// Problem Link:https://www.codechef.com/problems/TWOPLG
// D 14min
// puro nije korlam 4 ta 2 hour e😎
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
        int x, y;
        cin >> x >> y;
        string ans;
        if (x % 2 == 0)
            ans = "Bob";
        else
            ans = "Alice";
        // if (x % 2 == 0 && y % 2 == 0)
        //     ans = "Bob";
        // else if (x % 2 == 1 && y % 2 == 1)
        //     ans = "Alice";
        // else if (x % 2 == 1 && y % 2 == 0)
        //     ans = "Alice";
        // else if (x % 2 == 0 && y % 2 == 1)
        //     ans = "Bob";
        cout << ans << endl;
    }
    return 0;
}