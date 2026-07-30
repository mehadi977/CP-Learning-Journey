// // Problem Link:https://codeforces.com/problemset/problem/26/A

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
// bool isPrime(int n)
// {
//     if (n == 1)
//         return false;
//     for (int i = 2; i * i <= n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
// void solve__()
// {
//     int n;
//     cin >> n;
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         int val = i;
//         int cnt = 0;
//         for (int j = 2; j <= val; j++)
//         {

//             if (val % j == 0 && isPrime(j))
//             {

//                 cnt++;
//             }
//         }
//         if (cnt == 2)
//             ans++;
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

// Problem Link:https://codeforces.com/problemset/problem/26/A

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

// eta snippet banabo
// Sieve
vector<int> allPrime;
void sieve(long long n)
{
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            allPrime.push_back(i);
            for (long long j = i + i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
//

void solve__()
{
    sieve(1e5);
    // for (int a : allPrime)
    //     cout << a << " ";

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 2; i <= n; i++)
    {
        int cnt = 0;
        for (int j = 0; j <= n; j++)
        {
            if (i % allPrime[j] == 0)
                cnt++;
        }
        if (cnt == 2)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}