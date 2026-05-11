// Problem Link:https://codeforces.com/problemset/problem/855/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "NO" << endl;
            mp[s]++;
        }
        else
            cout << "YES" << endl;
        
    }

    return 0;
}
