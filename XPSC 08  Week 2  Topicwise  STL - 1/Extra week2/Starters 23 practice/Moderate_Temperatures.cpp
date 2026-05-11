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
        int mn = 101, mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mn = min(v[i], mn);
            mx = max(v[i], mx);
        }
        // int mx = *max_element(v.begin(), v.end());
        // int mn = *min_element(v.begin(), v.end());
        int modarate = 0;
        for (int a : v)
            if (a != mn && a != mx)
                modarate++;
        // cout << mx << " " << mn << endl;
        cout << modarate << endl;
    }

    return 0;
}
