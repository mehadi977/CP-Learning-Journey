// Problem Link:https://codeforces.com/problemset/problem/1097/B

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
    bool ok = false;
    // O(2^n*n)
    for (int mask = 0; mask < (1 << n); mask++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                // cout << 1 << " ";
                sum += v[i];
            }
            else
            {
                // cout << 0 << " ";
                sum -= v[i];
            }
        }
        // cout << sum << endl;
        if (sum == 0 || sum % 360 == 0)
        {
            ok = true;
            break;
        }
    }
    if (ok)
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}