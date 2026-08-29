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
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            cout << "Fizz" << endl;
        else
            cout << i << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}