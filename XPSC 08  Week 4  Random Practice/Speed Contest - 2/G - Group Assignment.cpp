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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
        }
        bool ok = true;
        for (auto [a, b] : mp)
        {
            if (b % a == 1)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
