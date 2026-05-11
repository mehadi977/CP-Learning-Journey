// Problem Link:https://www.codechef.com/problems/FBMATCH
//B 10min
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
            mp[c]++;
        bool ok = false;
        for (auto [a, b] : mp)
            if (b > 1)
            {
                ok = true;
                break;
            }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
