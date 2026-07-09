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
    string a, b;
    cin >> a >> b;
    int ans = 0;
    if (a == b)
    {
        cout << 0 << endl;
        return;
    }
    int oneA = 0, zA = 0, oneB = 0, zB = 0;
    for (char c : a)
    {
        if (c == '1')
            oneA++;
        else
            zA++;
    }
    for (char c : b)
    {
        if (c == '1')
            oneB++;
        else
            zB++;
    }
    if (oneA != oneB)
    {
        cout << -1 << endl;
        return;
    }
    vector<int> ap, bp;

    for (int i = 0; i < n; i++)
    {
        // if (a[i] == '1' and b[i] == '0')
        //     ans++;
        if (a[i] == '1')
            ap.pb(i);
        if (b[i] == '1')
            bp.pb(i);
    }
    // for (int a : ap)
    //     cout << a << " ";
    // cout << endl;

    // for (int a : bp)
    //     cout << a << " ";
    // cout << endl;
    for (int i = 0; i < ap.size(); i++)
    {
        if (ap[i] != bp[i])
            ans++;
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