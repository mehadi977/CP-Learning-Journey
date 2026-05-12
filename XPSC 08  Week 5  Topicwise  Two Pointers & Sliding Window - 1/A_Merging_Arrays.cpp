// // Problem Link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

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
//     vector<int> a(n), b(m);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < m; i++)
//         cin >> b[i];

//     vector<int> ans;
//     for (int i = 0; i < n; i++)
//         ans.push_back(a[i]);
//     for (int i = 0; i < m; i++)
//         ans.push_back(b[i]);
//     sort(ans.begin(), ans.end());
//     for (int a : ans)
//         cout << a << " ";

//     return 0;
// }
// solve it by two pointer-------------------

// Problem Link:https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

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
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    vector<int> ans;
    int l = 0, r = 0;
    while (1)
    {
        if (r < m && l == n)
        {
            ans.push_back(b[r]);
            r++;
        }
        else if (l < n && r == m)
        {
            ans.push_back(a[l]);
            l++;
        }
        else if ((l < n && a[l] <= b[r]))
        {
            ans.push_back(a[l]);
            l++;
        }
        else if ((r < m && b[r] < a[l]))
        {
            ans.push_back(b[r]);
            r++;
        }

        else
            break;
    }

    for (int a : ans)
        cout << a << " ";

    return 0;
}