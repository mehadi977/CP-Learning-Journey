// Problem Link: https://codeforces.com/problemset/problem/749/A

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
    cout << n / 2 << endl;
    int sum = 0;
    vector<int> ans;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            ans.pb(2);
        }
    }
    else
    {
        n -= 3;
        ans.pb(3);
        for (int i = 0; i < n / 2; i++)
        {
            ans.pb(2);
        }
    }
    for (int a : ans)
        cout << a << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}