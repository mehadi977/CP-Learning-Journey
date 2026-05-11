// Problem Link:https://codeforces.com/problemset/problem/1430/C

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
        priority_queue<int> pq;
        for (int i = 1; i <= n; i++)
        {
            pq.push(i);
        }
        // while (!pq.empty())
        // {
        //     cout << pq.top() << endl;
        //     pq.pop();
        // }

        vector<pair<int, int>> p;
        int c = n - 1;
        while (c--)
        {

            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            p.push_back({a, b});
            int newVal = (a + b + 1) / 2;
            pq.push(newVal);
        }

        cout << pq.top() << endl;
        for (auto a : p)
            cout << a.first << " " << a.second << endl;
    }

    return 0;
}
