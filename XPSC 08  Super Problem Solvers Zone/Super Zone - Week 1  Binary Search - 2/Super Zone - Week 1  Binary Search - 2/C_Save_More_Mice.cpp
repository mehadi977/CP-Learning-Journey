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
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < k; i++)
    {
        cin >> v[i];
    }
    sort(all(v));
    int ans = 0;
    ll sum = 0;
    for (int i = k - 1; i >= 0; i--)
    {
        sum += (n - v[i]);
        if (sum < n)
            ans++;
        else
            break;
    }
    cout << ans << endl;
    //
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