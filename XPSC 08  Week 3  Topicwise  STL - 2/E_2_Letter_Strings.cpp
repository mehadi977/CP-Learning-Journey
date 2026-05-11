// Problem Link: https://codeforces.com/problemset/problem/1669/E

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
        map<string, ll> all;
        map<char, ll> fst;
        map<char, ll> scnd;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            all[s]++;
            fst[s[0]]++;
            scnd[s[1]]++;
        }
        ll ans = 0;
        for (auto [st, cnt] : all)
        {
            char st_fst = st[0];
            char st_scnd = st[1];
            ll fst_cnt = fst[st_fst] - cnt;
            ll scnd_cnt = scnd[st_scnd] - cnt;
            ans += cnt * (fst_cnt + scnd_cnt);
        }

        cout << ans / 2 << endl;
    }

    return 0;
}

// broutforce
//  // Problem Link:https://codeforces.com/problemset/problem/1669/E

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
//         deque<string> s;
//         for (int i = 0; i < n; i++)
//         {
//             string a;
//             cin >> a;
//             s.push_back(a);
//         }
//         // for (auto a : s)
//         //     cout << a << endl;
//         // cout << endl;
//         ll cnt = 0;
//         for (int i = 0; i < n; i++)
//         {
//             auto point = *s.begin();
//             for (int i = 1; i < s.size(); i++)
//             {
//                 if (point != s[i])
//                 {
//                     if (point[0] == s[i][0])
//                         cnt++;
//                     if (point[1] == s[i][1])
//                         cnt++;
//                 }
//             }
//             s.pop_front();
//         }
//         cout << cnt << endl;
//     }

//     return 0;
// }
