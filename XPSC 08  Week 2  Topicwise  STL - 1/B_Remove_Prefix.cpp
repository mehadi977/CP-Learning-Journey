// Problem Link:https://codeforces.com/problemset/problem/1714/B

#include<bits/stdc++.h>
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        map<int, int> mp;
        for (int i = n - 1; i >= 0; i--)
        {
            mp[a[i]]++;
            if (mp[a[i]] <= 1)
                a.pop_back();
            else
                break;
        }
        // for (auto b : a)
        // {

        //     cout << b << " ";
        //     // cout << b.first << " " << b.second << endl;
        // }
        cout << a.size() << endl;
    }

    return 0;
}
