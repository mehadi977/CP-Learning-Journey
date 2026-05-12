// Problem Link:https://codeforces.com/problemset/problem/1792/A

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
        vector<int> h(n);
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        int one = 0;
        int other = 0;
        for (int i = 0; i < n; i++)
        {
            if (h[i] == 1)
                one++;
            else
                other++;
        }

        cout << other + (one + 1) / 2 << endl;
    }

    return 0;
}
