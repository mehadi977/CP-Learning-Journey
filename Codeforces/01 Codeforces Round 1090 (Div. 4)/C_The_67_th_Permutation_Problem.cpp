// Problem Link:https://codeforces.com/contest/2218/problem/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int r = n * 3;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(i);
            ans.push_back(r - 1);
            ans.push_back(r);
            r-=2;
        }
        for (int a : ans)
            cout << a << " ";
        cout << '\n';
    }

    return 0;
}
