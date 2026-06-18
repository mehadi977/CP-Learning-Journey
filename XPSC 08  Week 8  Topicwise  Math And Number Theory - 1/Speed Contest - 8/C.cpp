// // Problem Link:

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
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     sort(all(v));
//     int mx_odd = 0;
//     int odd = 0;
//     do
//     {
//         for (int a : v)
//             cout << a << " ";
//         cout << endl;
//         vector<int> pre(n);
//         pre[0] = v[0];

//         for (int i = 1; i < n; i++)
//         {
//             pre[i] = pre[i - 1] + v[i];
//         }
//         for (int a : pre)
//         {
//             cout << a << " ";
//             // if (a % 2 == 1)
//             //     odd++;
//         }
//         cout << endl
//              << endl;
//         // mx_odd = max(odd, mx_odd);
//         // odd = 0;

//     } while (next_permutation(all(v)));
//     cout << mx_odd << endl;
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
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even.pb(v[i]);
        else
            odd.pb(v[i]);
    }
    // for (int a : even)
    //     cout << a << " ";
    // cout << endl;
    vector<int> final;
    if (!odd.empty())
        final.pb(odd[0]);
    for (int a : even)
        final.pb(a);
    for (int i = 1; i < odd.size(); i++)
    {
        final.pb(odd[i]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << final[i] << " ";
    // }
    // cout << endl;
    vector<int> pre(n);
    pre[0] = final[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + final[i];
    }
    int ans = 0;
    for (int a : pre)
        // cout << a << " ";
        if (a % 2 == 1)
            ans++;
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