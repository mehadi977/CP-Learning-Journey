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
    int n, m;
    cin >> n >> m;
    vector<int> sri(n), nta(m);
    for (int i = 0; i < n; i++)
    {
        cin >> sri[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> nta[i];
    }
    int cnt = 0;
    sort(all(sri));
    sort(all(nta));
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (nta[j] <= 2 * sri[i])
        {
            cnt++;
            i++;
            j++;
        }
        else
            i++;
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