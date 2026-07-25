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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    while (true)
    {
        bool flg = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1] && v[i] + v[i + 1] <= 2)
            {
                flg = true;
                swap(v[i], v[i + 1]);
            }
        }
        if (!flg)
            break;
    }
    for (int x : v)
        cout << x << " ";
    cout << endl;
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