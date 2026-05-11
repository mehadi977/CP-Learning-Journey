// Problem Link:https://codeforces.com/problemset/problem/1506/D

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
        map<int, int> mp;
        while (n--)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        // for (auto [a, b] : mp)
        //     cout << a << " " << b << endl;
        // cout << endl;
        priority_queue<int> pq;
        for (auto [a, b] : mp)
        {
            pq.push(b);
        }
        while (!pq.empty())
        {
            if (pq.size() >= 2)
            {
                int top1 = pq.top();
                pq.pop();
                int top2 = pq.top();
                pq.pop();
                top1--;
                top2--;
                if (top1 > 0)
                    pq.push(top1);
                if (top2 > 0)
                    pq.push(top2);
            }
            else
                break;
        }
        int ans = 0;
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}
