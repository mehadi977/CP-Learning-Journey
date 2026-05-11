// // Problem Link:https://codeforces.com/problemset/problem/1927/A

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
//         string s;
//         cin >> s;
//         int lft, rt;

//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] == 'B')
//             {
//                 lft = i;
//                 break;
//             }
//         }
//         for (int i = n - 1; i >= 0; i--)
//         {
//             if (s[i] == 'B')
//             {
//                 rt = i;
//                 break;
//             }
//         }
//         // cout << lft << " " << rt << endl;
//         cout << rt - lft + 1 << endl;
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
        cin >> s;
        int lft = -1, rt = -1;
        lft = s.find('B');
        rt = s.rfind('B');
        // cout << lft << " " << rt << endl;
        cout << rt - lft + 1 << endl;
    }

    return 0;
}
