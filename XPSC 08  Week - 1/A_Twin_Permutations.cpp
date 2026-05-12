// Problem Link:https://codeforces.com/problemset/problem/1831/A

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << a[i] << " ";
        }

        for (int i = 0; i < n; i++)
        {
            b[i] = n + 1 - a[i];
        }
        for (int a : b)
            cout << a << " ";

        cout << endl;
    }

    return 0;
}
