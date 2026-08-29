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
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    if (mx + mn == 9 || mx - mn == 9 || (mn != 0 && mx / (float)mn == 9.0) || mx * mn == 9)
    {
        cout << "Nine";
    }
    else
        cout << "Nein";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}