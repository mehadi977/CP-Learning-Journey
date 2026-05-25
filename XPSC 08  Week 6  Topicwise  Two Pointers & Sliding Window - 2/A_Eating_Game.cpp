// Problem Link:https://codeforces.com/problemset/problem/2200/A

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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int ans = 0;
        int mx = 0;
        for (auto [val, cnt] : mp)
            if (val > mx)
                ans = cnt;

        cout << ans << endl;
    }

    return 0;
}
// // Problem Link:https://codeforces.com/problemset/problem/2200/A

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
//         int mx = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             mx = max(mx, v[i]);
//         }
//         int ans = 0;
//         for (auto a : v)
//             if (mx == a)
//                 ans++;

//         cout << ans << endl;
//     }

//     return 0;
// }
