// Problem Link: https://codeforces.com/problemset/problem/1703/C

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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            while (b--)
            {
                char c;
                cin >> c;
                if (c == 'D' && a[i] == 9)
                    a[i] = 0;
                else if (c == 'D')
                    a[i]++;
                if (c == 'U' && a[i] == 0)
                    a[i] = 9;
                else if (c == 'U')
                    a[i]--;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
