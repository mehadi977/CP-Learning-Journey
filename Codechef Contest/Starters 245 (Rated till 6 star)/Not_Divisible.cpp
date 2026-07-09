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
        cin >> v[i];

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
        ans[i] = i + 1;
    for (int i = 0; i < n; i++)
    {
        int problem_i = n + 1 - v[i];
        if (problem_i == ans[i])
        {
            for (int j = 0; j < n; j++)

            {
                int problem_j = n + 1 - v[j];
                if ((problem_i != ans[j]) && (problem_j != ans[i]))
                {
                    swap(ans[i], ans[j]);
                    break;
                }
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] + v[i] == n + 1)
            ok = false;
    }

    if (ok)
    {
        for (int a : ans)
            cout << a << " ";
        cout << endl;
    }
    else
        cout << -1 << endl;
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