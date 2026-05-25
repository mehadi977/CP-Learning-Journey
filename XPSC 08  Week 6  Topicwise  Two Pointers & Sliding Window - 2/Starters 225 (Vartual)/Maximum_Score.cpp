// Problem Link:https://www.codechef.com/problems/MXSCWN

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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            // cout << a[i] << " ";
        }
        // cout << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            // cout << b[i] << " ";
        }
        // cout<<endl;
        vector<int> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = a[i] - b[i];
        }
        // for (int a : diff)
        //     cout << a << " ";
        // cout << endl;
        bool bNeoaHoyehe = false;
        int minDiff = *min_element(diff.begin(), diff.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] - b[i] == minDiff && bNeoaHoyehe == false)
            {
                ans += b[i];
                bNeoaHoyehe = true;
            }
            else
            {
                ans += a[i];
            }
        }
        cout << ans << endl;
    }

    return 0;
}
