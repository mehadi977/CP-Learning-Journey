// Problem Link:https://www.codechef.com/problems/MIRRIM

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

void solve_Mehadi()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sum = v[0] + v[n - 1];
    bool flag = true;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (v[i] + v[j] != sum)
        {
            flag = false;
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
        solve_Mehadi();
    }

    return 0;
}