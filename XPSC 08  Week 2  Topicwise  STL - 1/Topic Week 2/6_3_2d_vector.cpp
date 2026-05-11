// Problem Link:

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
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        // for (int i = 0; i < m; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // v vector e a vector push
        v.push_back(a);
    }
    for (int i = 0; i < n; i++)
    {
        sort(v[i].begin(), v[i].end(), greater<int>());
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
