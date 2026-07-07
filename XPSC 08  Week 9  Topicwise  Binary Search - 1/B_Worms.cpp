// Problem Link:https://codeforces.com/problemset/problem/474/B

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

void solve__()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n);
    pre[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }
    // for (int a : v)
    //     cout << a << " ";
    // cout << endl;
    // for (int a : pre)
    //     cout << a << " ";
    // cout << endl;
    // binary search
    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        int l = 0, r = n - 1, mid, ans = -1;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (pre[mid] >= val)
            {
                ans = mid + 1;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}