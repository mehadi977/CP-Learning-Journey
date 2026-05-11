// Problem Link:https://codeforces.com/problemset/problem/501/B

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
    map<string, string> ans, has;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        auto it = has.find(a);
        if (it != has.end())
        {
            string old = has[a];
            ans[old] = b;
            has.erase(a);
            has[b] = old;
        }
        else
        {
            ans[a] = b;
            has[b] = a;
        }
    }
    cout << ans.size() << endl;
    for (auto a : ans)
        cout << a.first << " " << a.second << endl;

    return 0;
}
