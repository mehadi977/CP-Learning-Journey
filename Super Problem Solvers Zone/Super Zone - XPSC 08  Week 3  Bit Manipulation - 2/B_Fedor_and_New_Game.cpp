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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> player(m + 2);
    for (int i = 1; i <= m + 1; i++)
    {
        cin >> player[i];
    }
    vector<int> differ(m + 1);
    for (int i = 1; i <= m; i++)
    {
        differ[i] = (player[i] ^ player[m + 1]);
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        int d = __builtin_popcount(differ[i]);
        if (d <= k)
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve__();

    return 0;
}