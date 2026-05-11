// // Problem Link:https://www.codechef.com/START237D/problems/FINDALL
// // E
// //broutforce
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl '\n'
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         ll n;
//         cin >> n;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         // all possible permutation
//         // age sort korte hobe karon sort value pele loop break korbe
//         sort(a.begin(), a.end());
//         set<int> ans;
//         do
//         {
//             int x = 0;
//             for (int y : a)
//             {
//                 // cout << y << " ";
//                 if (x > y)
//                     x = 1;
//                 else if (x < y)
//                     x = -1;
//                 else
//                     x = 0;
//             }
//             ans.insert(x);
//             // cout << endl;
//         } while (next_permutation(a.begin(), a.end()));

//         for (int a : ans)
//             cout << a << " ";
//         cout << endl;
//     }
//     return 0;
// }

// optmized way

// Problem Link:https://www.codechef.com/START237D/problems/FINDALL
// E
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int neg = 0, zero = 0, pos = 0;
        vector<ll> modified; // all value max 2 bar nibo
        for (ll i : a)
        {
            if (i == -1 && neg < 2)
            {
                neg++;
                modified.push_back(i);
            }
            else if (i == 0 && zero < 2)
            {
                zero++;
                modified.push_back(i);
            }
            else if (i == 1 && pos < 2)
            {
                pos++;
                modified.push_back(1);
            }
        }
        // for (int a : modified)
        //     cout << a << " ";
        // cout << endl;
        // all possible permutation
        // age sort korte hobe karon sort value pele loop break korbe
        // eber modified vector er upor sob kaj hobe
        sort(modified.begin(), modified.end());
        set<int> ans;
        do
        {
            int x = 0;
            for (int y : modified)
            {
                // cout << y << " ";
                if (x > y)
                    x = 1;
                else if (x < y)
                    x = -1;
                else
                    x = 0;
            }
            ans.insert(x);
            // cout << endl;
        } while (next_permutation(modified.begin(), modified.end()));

        for (int a : ans)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}
