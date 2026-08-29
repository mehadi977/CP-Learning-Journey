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
    getline(cin, s);
    // cout << s;
    map<char, int> mp;
    for (char a : s)
    {
        if (a >= 'a' && a <= 'z')
            mp[a]++;
    }
    cout << mp.size();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}