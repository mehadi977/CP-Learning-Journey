// Problem Link:https://codeforces.com/problemset/problem/368/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre;
    set<int>st;
    for (int i = n-1; i >= 0; i--)
    {
        st.insert(v[i]);
        pre.push_back(st.size());
    }
    
    reverse(pre.begin(), pre.end());
    // for (int a : pre)
    //     cout << a << " ";

    while (m--)
    {
        int l;
        cin >> l;
        cout << pre[l - 1] << endl;
    }

    return 0;
}
