// Problem Link:https://codeforces.com/contest/2218/problem/D

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
        int a = 1, b = 3;
        vector<int> ans;
        while (ans.size() < n)
        {
            ans.push_back(a * b);
            a += 2;
            b += 2;
        }
        for (int a : ans)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}
