// Problem Link:https://codeforces.com/problemset/problem/1800/C2

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
        priority_queue<ll> pq;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a == 0)
            {
                if (!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(a);
        }
        cout << ans << endl;
    }

    return 0;
}
