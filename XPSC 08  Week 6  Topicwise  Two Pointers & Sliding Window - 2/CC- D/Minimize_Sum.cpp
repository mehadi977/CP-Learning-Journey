// //broutforce

// // Problem Link:https://www.codechef.com/problems/MINSMODM

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// #define pb push_back
// #define fi first
// #define se second
// #define endl '\n'
// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve__()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     vector<int> b = a;
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans += a[i];
//     }

//     while (true)
//     {
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             b[i] = (b[i] + 1) % m;
//             sum += b[i];
//         }
//         ans = min(ans, sum);
//         if (b == a)
//             break;

//         // for (int i = 0; i < n; i++)
//         // {
//         //     cout << b[i] << " ";
//         // }
//         // cout << endl;
//     }
//     cout << ans << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve__();
//     }

//     return 0;
// }
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
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    ll ans = sum;
    sort(all(v));
    for (int i = 0; i < n; i++)
    {
        int x = (m - v[i]) % m;
        int pos = lower_bound(all(v), m - x) - v.begin();
        int cnt = n - pos;
        ll cur = sum + n * 1LL * x - cnt * 1LL * m;
        ans = min(ans, cur);
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