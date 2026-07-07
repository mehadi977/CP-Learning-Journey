// Problem Link:https://codeforces.com/problemset/problem/1676/E

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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(rall(v));
    vector<int> preSum(n);
    preSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + v[i];
    }
    // for (int a : v)
    //     cout << a << " ";
    // cout << endl;
    // for (int a : preSum)
    //     cout << a << " ";
    // cout << endl;

    while (q--)
    {
        int x;
        cin >> x;
        // Manual binary Search
        //  int l = 0, r = n - 1, mid, ans = -1;
        //  while (l <= r)
        //  {
        //      mid = (l + r) / 2;
        //      if (preSum[mid] >= x)
        //      {
        //          ans = mid + 1;
        //          r = mid - 1;
        //      }
        //      else
        //          l = mid + 1;
        //  }
        //  cout << ans << endl;
        //  lower bound function
        int ans = -1;
        auto it = lower_bound(all(preSum), x);
        if (it != preSum.end())
            ans = it - preSum.begin() + 1;
        cout << ans << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}