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
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n ; i++)
    {
        cin >> v[i];
       
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] < v[i + 1] && v[i + 1] > v[i + 2])
            cnt++;
    }

    cout << cnt << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}