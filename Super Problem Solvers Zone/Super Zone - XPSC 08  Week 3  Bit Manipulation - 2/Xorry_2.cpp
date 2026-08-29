// Problem Link:https://www.codechef.com/problems/XORRY2

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

bool kth_bit_on(int n, int k)
{
    return ((n >> k) & 1);
}
void solve__()
{
    int x;
    cin >> x;
    int MSB = __lg(x), b = (1 << MSB), a = (x ^ b), sum = b, cnt = 0;
    for (int k = 0; k <= MSB; k++)
    {
        if (!kth_bit_on(a, k) && !kth_bit_on(b, k) && (sum + (1 << k) <= x))
        {
            cnt++;
            sum += (1 << k);
        }
    }
    int ans = (1 << cnt);
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