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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    auto ok = [&](int mid)
    {
        vector<bool> bad(n + 1, false);
        for (int i = 0; i < mid; i++)
        {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if (t[i] == p[j] && !bad[i + 1])
                j++;
            if (j == m)
            {
                found = true;
                break;
            }
        }
        return found;
    };

    int l = 0,   r = n, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}