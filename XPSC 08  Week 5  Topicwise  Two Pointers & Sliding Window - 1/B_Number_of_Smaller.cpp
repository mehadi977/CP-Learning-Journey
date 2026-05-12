// // Problem Link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
// //brout force
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define endl '\n'
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n, m;
//     cin >> n >> m;
//     vector<int> a(n);
//     vector<int> b(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     vector<int> ans;
//     int cnt = 0;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[j] < b[i])
//                 cnt++;
//             else
//                 break;
//         }
//         ans.push_back(cnt);
//         cnt = 0;
//     }
//     for (int a : ans)
//         cout << a << " ";

//     return 0;
// }
// optimize
// // Problem Link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    vector<int> ans;
    int cnt = 0;
    int l = 0, r = 0;
    while (r < m)

    {
        if (l < n && a[l] < b[r])
        {
            l++;
            cnt++;
        }
        else
        {
            r++;
            ans.push_back(cnt);
        }
    }

    for (int a : ans)
        cout << a << " ";

    return 0;
}
