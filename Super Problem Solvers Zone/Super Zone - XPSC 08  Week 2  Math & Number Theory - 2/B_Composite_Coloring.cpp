// Problem Link:https://codeforces.com/problemset/problem/1332/B

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
vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
void solve__()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            if (v[i] % prime[j] == 0)
            {
                mp[prime[j]].pb(i);
                break;
            }
        }
    }
    ////
    //  
    // for (auto [x, y] : mp)
    // {
    //     cout << x << " -> ";
    //     for (int a : y)
    //         cout << a << " ";
    //     cout << endl;
    // }

    vector<int> ans(n);
    int color = 1;
    for (auto &[x, y] : mp)
    {
        for (int pos : y)
            ans[pos] = color;
        color++;
    }
    cout << mp.size() << endl;
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    
}
//
//

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