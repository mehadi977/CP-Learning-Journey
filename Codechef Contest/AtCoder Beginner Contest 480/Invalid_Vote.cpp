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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        s[i] = x;
    }
    vector<int> vote(n, 0);
    for (int i = 0; i < m; i++)
    {
        string t;
        cin >> t;
        int exat = -1;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == t)
            {
                exat = j;
                break;
            }
        }
        if (exat != -1)
        {
            vote[exat]++;
            continue;
        }
        int cnt = 0, idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i].size() != t.size())
                continue;
            int dif = 0;
            for (int k = 0; k < t.size(); k++)
            {
                if (s[i][k] != t[k])
                    dif++;
            }
            if (dif == 1)
            {
                cnt++;
                idx = i;
            }
        }
        if (cnt == 1)
            vote[idx]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << vote[i] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}