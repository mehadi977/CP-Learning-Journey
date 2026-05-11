// Problem Link: https://codeforces.com/contest/2167/problem/A

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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
   
    }

    return 0;
}
