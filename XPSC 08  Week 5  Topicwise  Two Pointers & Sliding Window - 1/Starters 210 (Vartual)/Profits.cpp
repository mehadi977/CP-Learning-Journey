// Problem Link:https://www.codechef.com/problems/PROFIT?tab=statement

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
        int n, x;
        cin >> n >> x;
        int profit = 0;
        int cnt = 0;

        for (int i = n; i >= 0; i--)
        {
            if (i >= x)
            {
                profit += i;
                cnt++;
            }
        }
        int cost = cnt * x;
        // cout << cost << " " << profit << endl;
        cout << profit - cost << endl;
    }

    return 0;
}
