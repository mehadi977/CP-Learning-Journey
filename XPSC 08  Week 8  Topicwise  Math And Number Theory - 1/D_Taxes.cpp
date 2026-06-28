// Problem Link:https://codeforces.com/problemset/problem/735/D

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
bool PrimeCheck(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve__()
{
    int n;
    cin >> n;

    if (PrimeCheck(n))
        cout << 1 << endl;

    else if (n % 2 == 0)
        cout << 2 << endl;

    else if (PrimeCheck(n - 2))
        cout << 2 << endl;

    else
        cout << 3 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}