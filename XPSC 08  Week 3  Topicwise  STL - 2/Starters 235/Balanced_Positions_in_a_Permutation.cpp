// Problem Link:https://www.codechef.com/problems/P3235

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int ans = 0;
        int cnt_right = 0, cnt_left = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
                if (i != j && v[j] > v[i])
                    cnt_right++;
            }
            for (int k = i; k >= 0; k--)
            {
                if (i != k && v[k] < v[i])
                    cnt_left++;
            }
            if (cnt_left == cnt_right)
                ans++;
            cnt_right = 0;
            cnt_left = 0;
        }
        cout << ans << endl;
    }

    return 0;
}
