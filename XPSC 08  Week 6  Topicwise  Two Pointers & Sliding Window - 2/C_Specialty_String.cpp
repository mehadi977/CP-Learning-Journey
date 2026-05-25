// // Problem Link:https://codeforces.com/problemset/problem/2200/C
// //eta stack diye kora jete pare kalke try korbo

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

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     if (n == 1)
//         no;
//     else
//     {
//         while (!s.empty())
//         {
//             string x = s;
//             // cout << x << endl;
//             bool Found = false;
//             for (int i = 1; i < x.size();)
//             {
//                 if (x[i] == x[i - 1])
//                 {
//                     x.erase(x.begin() + i);
//                     x.erase(x.begin() + i - 1);
//                     i = max(0, i - 2);
//                     Found = true;
//                 }
//                 else
//                     i++;
//             }
//             if (Found == false)
//                 break;
//             // cout << x << endl;
//             s = x;
//         }
//         if (s.empty())
//             yes;
//         else
//             no;
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve();
//     }

//     return 0;
// }

// Problem Link:https://codeforces.com/problemset/problem/2200/C

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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    stack<char> st;
    for (char a : s)
    {
        if (!st.empty() && st.top() == a)
            st.pop();
        else
            st.push(a);
    }
    if (st.empty())
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }

    return 0;
}