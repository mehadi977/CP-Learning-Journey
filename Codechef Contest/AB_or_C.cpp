// Problem Link:https://www.codechef.com/problems/ABC7

//*resolve

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ;
        vector<vector<int>> ar(n);
        for (int i = 0; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            vector<int> tmp = {a, b, c};
            sort(tmp.begin(), tmp.end());
            ar[i] = tmp;
        }

        multiset<pair<int, int>> ms;
        vector<int> cur(n);
        for (int i = 0; i < n; i++)
        {
            ms.insert({ar[i][0], i});
        }
        int ans = 2e9;
        while (true)
        {
            auto it_min = ms.begin();
            auto it_mx = ms.rbegin();
            int mn = it_min->first;
            int mx = it_mx->first;
            ans = min(ans, mx - mn);
            int idx = it_min->second;
            ms.erase(it_min);
            cur[idx]++;
            if (cur[idx] == 3)
                break;
            ms.insert({ar[idx][cur[idx]], idx});
        }
        cout << ans << endl;
    }

    return 0;
}
