// Problem Link:

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
    map<int, int> mp;
    int count_zero = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if (v[i] == 0)
            count_zero++;
    }
    int mxfre = 0;
    int mxval = -1;
    for (auto [a, cnt] : mp)
    {
        // cout << a << " " << cnt << endl;
        if (a != 0 && cnt > mxfre)
        {
            mxfre = cnt;
            mxval = a;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            v[i] = mxval;
    }
    // for (int a : v)
    //     cout << a << " ";
    // cout << endl;
    // mxfre += count_zero;
    // int ans = 0;

    // cout << mxfre << endl;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (i != j && v[i] == v[j])
                ans++;
        }
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