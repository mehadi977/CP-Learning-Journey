// // Problem Link:https://codeforces.com/problemset/problem/1791/C
// // My solution
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
//         deque<int> d;
//         string s;
//         cin >> s;
//         for (auto a : s)
//             d.push_back(a);
//         int i = 0, j = n - 1;
//         while (!d.empty())
//         {
//             if (d.front() == '0' && d.back() == '1')
//             {
//                 d.pop_front();
//                 d.pop_back();
//             }
//             else if (d.front() == '1' && d.back() == '0')
//             {
//                 d.pop_front();
//                 d.pop_back();
//             }
//             else
//                 break;
//         }
//         // for (auto a : d)
//         //     cout << a << " ";
//         // cout << endl;
//         if (d.empty())
//             cout << 0 << endl;
//         else
//             cout << d.size() << endl;
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
        string s;
        cin>>s;
        int ans = n, l = 0, r = n - 1;
        while (l <= r)
        {
            if (s[l] == s[r])
                break;
            else
            {
                ans -= 2;
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
