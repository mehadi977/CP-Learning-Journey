// Problem Link:https://www.codechef.com/problems/SORTPREF

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
bool sorted(vector<int> v)
{
    bool ok = true;
    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            ok = false;
            break;
        }
    }
    return ok;
}
void solve_Mehadi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (sorted(v))
        cout << 0 << endl;
    else
    {
        int ans;
        for (int i = 0; i < n ; i++)
        {
            if (v[i] != i + 1)
            {
                ans = v[i];
            }
        }
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
        solve_Mehadi();
    }

    return 0;
}