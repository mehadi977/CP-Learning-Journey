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
    char a[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    if ((a[0][0] == 'A' && a[0][1] == 'D') || (a[0][1] == 'A' && a[0][0] == 'D') ||
        (a[1][0] == 'A' && a[1][1] == 'D') ||
        (a[0][0] == 'A' && a[1][0] == 'D') ||
        (a[1][1] == 'A' && a[1][0] == 'D') ||
        (a[1][0] == 'A' && a[0][0] == 'D') ||
        (a[1][1] == 'A' && a[0][1] == 'D') ||
        (a[0][1] == 'A' && a[1][1] == 'D'))
        cout<<"Yes";
    else
        cout<<"No";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}