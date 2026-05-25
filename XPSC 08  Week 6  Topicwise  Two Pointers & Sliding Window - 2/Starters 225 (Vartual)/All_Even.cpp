// Problem Link:https://www.codechef.com/problems/ALLEV

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        while (v.size() != 1)
        {
            v[v.size() - 2] += v[v.size() - 1];
            v.pop_back();
            // for (int a : v)
            //     cout << a << " ";
        }
        // cout << endl;
        // for (int a : v)
        //     cout << a << " ";
        // cout << endl
        //      << v[0] << endl;
        if (v[0] % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
