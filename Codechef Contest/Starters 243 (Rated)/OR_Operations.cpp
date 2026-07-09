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
    int orr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        orr |= v[i];
    }
    int sg = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        cur |= v[i];
        if (cur == orr)
        {
            sg++;
            cur = 0;
        }
    }

    cout << n-sg << endl;
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