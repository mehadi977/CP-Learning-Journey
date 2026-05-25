// Problem Link:https://codeforces.com/problemset/problem/1399/C

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
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }

    sort(all(w));
    int ans = 0;
    for (int sum = 1; sum <= 100; sum++)
    {
        int cnt = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (w[l] + w[r] > sum)
            {
                r--;
            }
            else if (w[l] + w[r] < sum)
            {
                l++;
            }
            else
            {
                cnt++;
                l++, r--;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
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