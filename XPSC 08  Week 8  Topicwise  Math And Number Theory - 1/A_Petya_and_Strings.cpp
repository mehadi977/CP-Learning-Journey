// // Problem Link:https://codeforces.com/problemset/problem/112/A

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
//     string s, t;
//     cin >> s >> t;
//     // sort(all(s));
//     // sort(all(t));
//     int cnt1 = 0, cnt2 = 0;
//     for (char a : s)
//     {
//         if ('A' <= a && a <= 'Z')
//             cnt1 += a;
//         else
//             cnt1 += (a - 32);
//     }
//     for (char a : t)
//     {
//         if ('A' <= a && a <= 'Z')
//             cnt2 += a;
//         else
//             cnt2 += (a - 32);
//     }
//     // cout << cnt1 << endl
//     //      << cnt2;
//     if (cnt1 < cnt2)
//         cout << -1;
//     else if (cnt1 > cnt2)
//         cout << 1;
//     else
//         cout << 0;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     solve__();

//     return 0;
// }

// Problem Link:https://codeforces.com/problemset/problem/112/A

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
    string s, t;
    cin >> s >> t;
    // sort(all(s));
    // sort(all(t));
    int a = 0, b = 0;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            a = s[i];
        else
            a = s[i] - 32;
        if (t[i] >= 'A' && t[i] <= 'Z')
            b = t[i];
        else
            b = t[i] - 32;
        if (a < b)
        {
            ans = -1;
            break;
        }
        else if (a > b)
        {
            ans = 1;
            break;
        }
        a = 0;
        b = 0;
    }
    cout << ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}

// // Problem Link:https://codeforces.com/problemset/problem/112/A

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
//     string s, t;
//     cin >> s >> t;
//     // sort(all(s));
//     // sort(all(t));

//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//             s[i] -= 32;
//     }
//     for (int i = 0; i < t.size(); i++)
//     {
//         if (t[i] >= 'a' && t[i] <= 'z')
//             t[i] -= 32;
//     }

//     int ans = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] < t[i])
//         {
//             ans = -1;
//             break;
//         }
//         else if (s[i] > t[i])
//         {
//             ans = 1;
//             break;
//         }
//     }
//     cout << ans;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     solve__();

//     return 0;
// }