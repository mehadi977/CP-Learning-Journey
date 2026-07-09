// // Problem Link:https://www.codechef.com/START239D/problems/EQBEND

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

// void solve_Mehadi()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     map<int, int> mp;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//         mp[v[i]]++;
//     }
//     int ans = 0;
//     int min_ans = 1e9;
//     for (auto [val, cnt] : mp)
//     {
//         if (cnt >= 2)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (v[i] == val)
//                 {
//                     ans += i;
//                     break;
//                 }
//             }
//             for (int i = n - 1; i >= 0; i--)
//             {

//                 if (v[i] == val)
//                 {
//                     ans += n - i-1;
//                     break;
//                 }
//             }
//             min_ans = min(ans, min_ans);
//             ans = 0;
//         }
//     }
//     if (min_ans == 1e9)
//         cout << -1 << endl;
//     else
//         cout << min_ans << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve_Mehadi();
//     }

//     return 0;
// }

// using map
//  Problem Link:

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
    int ans = 1e9;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]].push_back(i);
    }
    for (auto [a, b] : mp)
    {

        if ((b.size() > 1))
        {
            int l = *b.begin(), r = n - 1 - *--b.end();
            ans = min(ans, l + r);
        }
    }
    if (ans == 1e9)
        cout << -1 << endl;
    else
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