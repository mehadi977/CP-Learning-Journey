// Problem Link:https://codeforces.com/problemset/problem/1986/C

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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> st;
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            st.insert(a);
        }
        string c;
        cin >> c;
        sort(c.begin(), c.end());
        int idx = 0;
        for (auto a : st)
        {
            s[a-1] = c[idx];
            idx++;
        }

        cout << s << endl;
    }

    return 0;
}
