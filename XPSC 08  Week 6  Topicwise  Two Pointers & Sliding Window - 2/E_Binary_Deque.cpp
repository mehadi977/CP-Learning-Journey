// Problem Link:https://codeforces.com/problemset/problem/1692/E

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve_Mehadi()
{
    int n, s;
    cin >> n >> s;
    vector<int> v(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    if (total < s)
    {
        cout << -1 << endl;
        return;
    }
    queue<int> q;
    int sum = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        q.push(v[i]);
        sum += v[i];
        if (sum > s)
        {
            while (sum > s)
            {
                sum -= q.front();
                q.pop();
            }
        }
        if (sum == s)
            ans = max(ans, (int)q.size());
    }
    //longest wwindow theke size -- korbo
    cout << n - ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_Mehadi();
    }

    return 0;
}