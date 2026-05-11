// Problem Link:https://codeforces.com/contest/2185/problem/A

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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cout << n * n;
        }
    }

    return 0;
}
