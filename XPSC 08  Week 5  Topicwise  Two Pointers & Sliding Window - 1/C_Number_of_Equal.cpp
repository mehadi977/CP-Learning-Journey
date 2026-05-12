// // Problem Link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define endl '\n'
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> a(n);
//     vector<ll> b(m);
//     for (ll i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         // cout << a[i] << " ";
//     }
//     // cout << endl;
//     for (ll i = 0; i < m; i++)
//     {
//         cin >> b[i];
//         // cout << b[i] << " ";
//     }
//     cout << endl;
//     map<ll, ll> cnt1, cnt2;
//     for (ll i = 0; i < n; i++)
//     {
//         cnt1[a[i]]++;
//     }
//     for (ll i = 0; i < m; i++)
//     {
//         cnt2[b[i]]++;
//     }
//     // for (auto [a, b] : cnt1)
//     //     cout << a << " " << b << endl;

//     // cout << endl
//     //      << endl;
//     ll ans = 0;
//     for (auto [a, b] : cnt2)
//     {
//         ans += (b * cnt1[a]);
//     }
//     cout << ans << endl;
//     return 0;
// }

//
// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
    // cout << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        // cout << b[i] << " ";
    }
    int l = 0, r = 0;
    ll ans = 0;
    while (r < m && l < n)
    {
        int curr = a[l], cnt1 = 0, cnt2 = 0;
        while (l < n && curr == a[l])
        {
            l++;
            cnt1++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }
        while (r < m && b[r] == curr)
        {
            r++;
            cnt2++;
        }
        ans += (1LL * cnt1 * cnt2);
    }
    cout << ans << endl;

    return 0;
}
