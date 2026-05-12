// Problem Link:https://www.codechef.com/problems/BESTSEATS

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
        }
        int cost = 0, minCost = 1e9;
        for (int i = 0; i < n - 1; i++)
        {
            cost = v[i] + v[i + 1];
            minCost = min(minCost, cost);
        }
        cout << minCost << endl;
    }

    return 0;
}
