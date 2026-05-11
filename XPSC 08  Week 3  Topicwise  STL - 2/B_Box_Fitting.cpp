// // Problem Link:// Problem Link:https://codeforces.com/problemset/problem/1498/B

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
//         int n, W;
//         cin >> n >> W;
//         multiset<int> ms;
//         for (int i = 0; i < n; i++)
//         {
//             int a;
//             cin >> a;
//             ms.insert(a);
//         }
//         int hight = 0;
//         while (!ms.empty())
//         {
//             int width = W;
//             while (true)
//             {
//                 auto it = ms.upper_bound(width);
//                 if (it == ms.begin())
//                     break;

//                 it--;
//                 width -= *it;
//                 ms.erase(it);
//             }
//             hight++;
//         }

//         cout << hight << endl;
//     }

//     return 0;
// }

// *claud kore dilo

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
        int n, W;
        cin >> n >> W;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int height = 0;
        int left = 0, right = n - 1;

        while (left <= right)
        {
            // নতুন shelf, সবচেয়ে বড় item দিয়ে শুরু
            int width = W - a[right];
            right--;
            height++;

            // বাকি জায়গায় ছোট থেকে যতটুকু ধরে
            while (left <= right && a[left] <= width)
            {
                width -= a[left];
                left++;
            }
        }

        cout << height << endl;
    }

    return 0;
}