// Problem Link:https://www.codechef.com/problems/PASSEXAMS

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
        int n = 3;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        // for (int a : v)
        //     cout << a << " ";
        // cout << endl;
        if (v[0] >= 50 && v[1] >= 50)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
