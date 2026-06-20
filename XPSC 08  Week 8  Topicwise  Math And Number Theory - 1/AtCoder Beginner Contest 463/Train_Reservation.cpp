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
    char x;
    cin >> x;
    int t = 0;
    if (x == 'A')
        t = 0;
    else if (x == 'B')
        t = 1;
    else if (x == 'C')
        t = 2;
    else if (x == 'D')
        t = 3;
    else if (x == 'E')
        t = 4;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s.push_back(a);
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        // cout << s[i];
        // cout << endl;
        if (s[i][t] == 'o')
            flag = true;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}