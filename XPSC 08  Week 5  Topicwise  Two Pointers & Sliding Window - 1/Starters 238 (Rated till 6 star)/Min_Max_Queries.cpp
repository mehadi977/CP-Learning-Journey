// Problem Link:https://www.codechef.com/problems/MNMXQR
//Upsolve
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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        while (q--)
        {
            int type;
            cin >> type;
            if (type == 1)
            {
                int pos, val;
                cin >> pos >> val;
                pos--;
                a[pos] = val;
            }
            else
            {
                int l, r;
                cin >> l >> r;
                l--, r--;
                if (l == r)
                    cout << a[l] << endl;
                else
                {
                    int sz = r - l + 1;
                    if (sz % 2 == 0)
                    {
                        // even
                        // middle 2
                        int midR = l + sz / 2;
                        int midL = midR - 1;
                        cout << max(a[midR], a[midL]) << endl;
                    }
                    else
                    {
                        // odd
                        // middle 3
                        int mid = l + sz / 2;
                        int midR = mid + 1;
                        int midL = mid - 1;
                        int min1 = min(a[midL], a[mid]);
                        int min2 = min(a[mid], a[midR]);
                        cout << max(min1, min2) << endl;
                    }
                }
            }
        }
    }

    return 0;
}
