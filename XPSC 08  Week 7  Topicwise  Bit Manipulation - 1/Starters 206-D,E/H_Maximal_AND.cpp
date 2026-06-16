// Problem Link:https://codeforces.com/problemset/problem/1669/H

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
const int B = 30;
void printbit(int n, int k)
{
    for (; k >= 0; k--)
    {
        if (n >> k & 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
void solve__()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> bits(B + 1);
    for (int i = 0; i < n; i++)
    {
        for (int j = B; j >= 0; j--)
        {
            if (v[i] >> j & 1)
                bits[j]++;
        }
    }
    // for (int i = B; i >=0; i--)
    // {
    //     cout << bits[i] << " ";
    // }
    int ans = 0;
    for (int j = B; j >= 0; j--)
    {
        if (bits[j] == n)
            ans += 1 << j; // 2er power j
        else
        {
            int need = n - bits[j];
            if (k >= need)
            {
                ans += 1 << j;
                k -= need;
            }
        }
    }
    cout << ans << endl;
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