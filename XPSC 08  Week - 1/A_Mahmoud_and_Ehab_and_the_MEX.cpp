// Problem Link:https://codeforces.com/problemset/problem/862/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n, x;
    cin >> n >> x;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    int ans = 0;
    for (int i = 0; i < x; i++)
    {
        if (m[i] == 0)
            ans++;
    }
    if (m[x] != 0)
        ans++;
    cout << ans;

    return 0;
}
