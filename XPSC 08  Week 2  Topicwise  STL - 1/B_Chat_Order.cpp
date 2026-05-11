// Problem Link:https://codeforces.com/problemset/problem/637/B

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
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin >> a;
        s.push_back(a);
    }
    
    // vector<string> ans;
    reverse(s.begin(), s.end());
    map<string, int> mp;
    for (auto a : s)
    {
        if (mp[a] == 0)
        {
            cout << a << endl;
            mp[a]++;
        }
    }

    return 0;
}
