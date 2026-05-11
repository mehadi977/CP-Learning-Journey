// Problem Link:https://codeforces.com/problemset/problem/903/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // cout << v[i] << " ";
    }

    map<int, int> mp;
    // sort(v.rbegin(), v.rend());
    for (int i = 0; i < n; i++)
        mp[v[i]]++;

    // for (auto [a, b] : mp)
    //     cout << a << " " << b << endl;

    int ans = 0;
    for (auto [a, b] : mp)
    {
        ans = max(ans, b);
    }
    cout << ans;

    return 0;
}
