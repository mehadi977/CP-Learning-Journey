// Problem Link:https://www.codechef.com/problems/SETSK?tab=statement
//eta bujhi nai valovabe
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
        int n, k;
        cin >> n >> k;
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool flag = true;

        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            int zero = 1, one = 0;
            for (int j = max(0, i - k); j <= min(n - 1, i + k); j++)
            {
                if (i == j)
                    continue;
                if (b[j] == 1)
                {
                    zero = 0;
                    one = 1;
                }
            }
            flag = (b[i] == 1 && zero) || (b[i] == 0 && one);
            if (!flag)
                break;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

        // cout << endl;
    }

    return 0;
}
