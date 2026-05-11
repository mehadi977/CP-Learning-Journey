// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
        }
        // cout << endl;
        sort(v.begin(), v.end());
        int m = n - k;
        int mid = (m + 1) / 2;
        int strt = mid - 1;
        int end = strt + k;
        vector<int> ans;
        for (int i = strt; i <= end; i++)
        {
            if (ans.empty() || v[i] != ans.back())
                ans.push_back(v[i]);
        }
        for (auto a : ans)
            cout << a << " ";

        cout << endl;
    }

    return 0;
}
