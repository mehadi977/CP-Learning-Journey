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
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    int fstG = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'G')
        {
            fstG = i;
            break;
        }
    }
    if (fstG == -1)
    {
        cout << n << endl;
        return;
    }
    int ans = 0, cnt = 0;
    ans += max(0, fstG - d);
    for (int i = fstG + 1; i < n; i++)
    {
        if (s[i] == 'G')
        {
            ans += max(0, cnt - (2 * d));
            cnt = 0;
        }
        else
            cnt++;
    }
    ans += max(0, cnt - d);
    cout << ans << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}