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
//     int n;
//     cin >> n;
//     string s, t;
//     cin >> s >> t;
//     int i = 0, j = 0;
//     while (i < n && j < n)
//     {
//         char target = t[j];
//         // while (j < n && t[j] == target)
//         //     j++;

//         while (i < n && s[i] != target)
//             i++;
//         if (s[i] == target)
//             j++;
//     }
//     if (j == n)
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
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    set<char> a, b;
    for (char x : s)
        a.insert(x);
    for (char x : t)
        b.insert(x);
    for (char x : a)
        cout << x;
    if (a == b)
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