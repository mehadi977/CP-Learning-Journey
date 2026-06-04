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
    int sum = 0;
    int evn = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];

        if (v[i] % 2 == 0)
            evn++;
        else
            odd++;
    }

    if (sum % 2 == 0 && evn > 0)
    {
        yes;
    }
    else if (sum % 2 == 1 && odd > 0)
        yes;
    else
        no;

    // cout << sum << endl;
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