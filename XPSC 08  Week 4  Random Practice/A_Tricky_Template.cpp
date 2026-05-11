// Problem Link:https://codeforces.com/problemset/problem/1922/A

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
        string a, b, c;
        cin >> a >> b >> c;
        bool sem = false;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                sem = true;
                break;
            }
        }

        if (sem)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
