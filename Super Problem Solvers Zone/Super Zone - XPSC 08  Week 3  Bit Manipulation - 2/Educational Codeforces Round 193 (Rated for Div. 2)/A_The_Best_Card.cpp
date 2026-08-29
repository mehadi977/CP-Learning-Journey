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
// Sieve
vector<int> allPrime;
vector<bool> isPrime(1e7, true);
void sieve(long long n)
{

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
    int n;
    cin >> n;
    if (isPrime[n + 1])
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sieve(1e7);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}