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
        int cnt = 0;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] != 0)
                cnt++;
            else
            {

                cnt = 0;
            }
            mx = max(cnt, mx);
        }
        cout << mx << endl;
    }

    return 0;
}
