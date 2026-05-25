// Problem Link: https://codeforces.com/problemset/problem/2124/A

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
    bool sortedd = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            sortedd = false;
            break;
        }
    }
    if (sortedd)
    {
        no;
        return;
    }
    vector<int> ans;
    for (int i = 0; i < n-1; i++)
    {
        if (v[i] > v[i+1])
        {
            ans.push_back(v[i]);
            ans.push_back(v[i+1]);
            break;
        }
    }
    yes;
    cout << 2 << endl;
    for (int a : ans)
        cout << a << " ";
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