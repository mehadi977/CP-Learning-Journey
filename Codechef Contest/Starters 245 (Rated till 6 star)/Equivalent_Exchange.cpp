// Problem Link:

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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int i = 0; i <= k; i++)
    {
        bool invalid = true;
        int red = i;
        int blue = k - i;
        for (int j = 0; j < n; j++)
        {
            if (v[j] > 0)
            {
                red += v[j];
                blue -= v[j];
            }
            else
            {
                int val = abs(v[j]);
                red -= val;
                blue += val;
            }
            if (red < 0 || blue < 0)
            {
                invalid = false;
                break;
            }
        }
        if (invalid)
        {
            flag = true;
            break;
        }
    }
    if (flag)
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
        solve__();
    }

    return 0;
}

// // Problem Link:

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
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     int r = 0, b = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int p = 0, mn = 0, mx = 0;
//     for (int i = 0; i < n; i++)
//     {
//         p += v[i];
//         mn = min(p, mn);
//         mx = max(p, mx);
//     }

//     // cout << mn << " " << mx << endl;
//     int h = k - mx, l;
//     if (mn < 0)
//         l = abs(mn);
//     else
//         l = mn * -1;
//     if (l <= h)
//         yes;
//     else
//         no;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int tc;
//     cin >> tc;
//     while (tc--)
//     {
//         solve__();
//     }

//     return 0;
// }