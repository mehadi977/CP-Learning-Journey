// // Problem Link:https://cses.fi/problemset/task/1713

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
// int mx=1e7;
// vector<vector<int>> divisor(mx+1);
// void solve__()
// {
//     int n;
//     cin >> n;

//     cout << divisor[n].size() << endl;
//     // cout << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     for (int i = 1; i <= mx; i++)
//     {
//         for (int j = i; j <= mx; j += i)
//         {
//             divisor[j].pb(i);
//         }
//     }

//     // for (int i = 1; i <= n; i++)
//     // {
//     //     cout << i << " -> ";
//     //     for (int x : divisor[i])
//     //         cout << x << " ";
//     //     cout << endl;
//     // }

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
int mx = 1e6;
vector<int> divisor(mx + 1);
void solve__()
{
    int n;
    cin >> n;
    cout << divisor[n] << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 1; i <= mx; i++)
    {
        for (int j = i; j <= mx; j += i)
            divisor[j]++;
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}