// Problem Link:https://codeforces.com/problemset/problem/1783/B

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
        int mn = 1, mx = n * n;
        int cnt = 1;
        vector<vector<int>> mt(n, vector<int>(n));
        // int mt[n][n];
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (cnt % 2 == 0)
                    {
                        mt[i][j] = mn;
                        mn++;
                    }
                    else
                    {
                        mt[i][j] = mx;
                        mx--;
                    }
                    cnt++;
                }
            }
            else
            {
                for (int j = n - 1; j >= 0; j--)
                {
                    if (cnt % 2 == 0)
                    {
                        mt[i][j] = mn;
                        mn++;
                    }
                    else
                    {
                        mt[i][j] = mx;
                        mx--;
                    }
                    cnt++;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mt[i][j] << " ";
            }
            cout << endl;

            // cout << endl;
        }
    }
    return 0;
}