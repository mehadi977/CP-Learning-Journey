// Problem Link:https://codeforces.com/contest/2250/problem/B

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
    int n, k;
    cin >> n >> k;
    if (k > n - 2)
    {
        cout << -1 << endl;
        return;
    }
    string ans = "";
    int zero = (k + 1) / 2;
    int one = k / 2;
    for (int i = 1; i <= zero + 1; i++)
    {
        ans += '0';
    }
    for (int i = 1; i <= one + 1; i++)
    {
        ans += '1';
    }
    char c = '0';
    while (ans.size() < n)
    {
        ans += c;
        if (c == '0')
            c = '1';
        else
            c = '0'; 
    } 
    if (abs(count(all(ans), '0') - count(all(ans), '1')) > 1)
    {
        ans.pop_back();
        ans = '1' + ans;
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