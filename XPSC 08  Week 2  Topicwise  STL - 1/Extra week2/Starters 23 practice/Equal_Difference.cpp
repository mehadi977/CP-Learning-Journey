// // Problem Link:https://www.codechef.com/problems/EQSUM

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
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         int cnt = 0;
//         map<int, int> mp;
//         for (int i = 0; i < n; i++)
//         {

//             mp[v[i] - i]++;
//         }

//         // for (auto [a, b] : mp)
//         //     cout << a << " " << b << endl;
//         for (auto [a, b] : mp)
//             for (int i = 1; i < b; i++)
//             {
//                 cnt += i;
//             }

//         cout << cnt << endl;
//         // cout << endl;
//     }

//     return 0;
// }

// Problem Link:

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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int chr = v[i] - i;
            if (mp.find(chr) != mp.end())
                ans += mp[chr];
            mp[chr]++;
        }
        cout << ans << endl;
    }

    return 0;
}
