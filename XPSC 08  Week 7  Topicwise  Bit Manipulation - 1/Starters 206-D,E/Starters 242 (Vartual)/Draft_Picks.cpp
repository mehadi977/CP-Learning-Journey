// // Problem Link:https://www.codechef.com/problems/DRAFTPICK

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
//     int n, k;
//     cin >> n >> k;

//     vector<int> ans(n);
//     bool flag = true;
//     while (k > 0)
//     {
//         if (flag)
//         {
//             for (int i = 0; i < n; i++)
//             {
//                 if (k > 0)
//                 {
//                     ans[i] += k;
//                     k--;
//                 }
//                 else
//                     break;
//             }
//             flag = false;
//         }
//         else
//         {
//             for (int i = n - 1; i >= 0; i--)
//             {
//                 if (k > 0)
//                 {
//                     ans[i] += k;
//                     k--;
//                 }
//                 else
//                     break;
//                 }
//                 flag = true;
//         }
//     }
//     // for (int a : ans)
//     //     cout << a << " ";
//     cout << *max_element(all(ans)) << endl;
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
    int n, k;
    cin >> n >> k;
    vector<int> ans(n + 1);
    int xr = 1;
    while (k > 0)
    {
        if (xr == 1)
        {
            for (int i = 0; i < n; i++)
            {
                ans[i] += k;
                k--;
                if (k == 0)
                    break;
            }
            xr = 0;
        }
        else if (xr == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                ans[i] += k;
                k--;
                if (k == 0)
                    break;
            }
            xr = 1;
        }
    }
    cout << *max_element(all(ans)) << endl;
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