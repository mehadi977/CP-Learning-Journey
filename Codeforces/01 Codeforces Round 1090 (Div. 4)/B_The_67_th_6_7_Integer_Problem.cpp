// // Problem Link:https://codeforces.com/contest/2218/problem/B

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {

//         int n = 7, mx = -67;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             // cout << a[i] << " ";
//             mx = max(mx, a[i]);
//         }
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             ans += a[i];
//         }
//         int m = mx + mx;
//         ans = ans * -1;
//         ans += m;
//         cout << ans << endl;
//     }

//     return 0;
// }


// upsolve
// Problem Link:
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 7;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = -1e9;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    sum += a[j];
                else
                    sum -= a[j];
            }
            ans = max(ans, sum);
        }
        cout << ans << endl;
    }

    return 0;
}
