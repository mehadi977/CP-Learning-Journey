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
    string s;
    cin >> s;
    string a, b;
    // cout << s;
    for (char x : s)
    {
        if (x >= '0' && x <= '9')
            a.push_back(x);
        else
            b.push_back(x);
    }
    cout << a  << b;
    // sort(all(b));
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << b.back();
    //     b.pop_back();
    //     cout << a.back();
    //     a.pop_back();
    // }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}