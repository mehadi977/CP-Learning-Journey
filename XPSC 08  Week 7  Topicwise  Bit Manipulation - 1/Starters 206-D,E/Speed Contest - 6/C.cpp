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
    if (k == 0)
    {
        if (n % 4 == 0)
            cout << "Off" << endl;
        else
            cout << "On" << endl;
    }
    else if (k == 1)
    {
        if (n % 4 == 0)
            cout << "On" << endl;
        else
            cout <<"Ambiguous" << endl;
    }
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