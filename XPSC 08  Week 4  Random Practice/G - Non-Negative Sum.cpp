// Problem Link:

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
        multiset<int, greater<int>> ms;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            ms.insert(a);
        }
        // for (auto a : ms)
        //     cout << a << " ";
        int ans = 0;
        int sum = 0;
        for (auto a : ms)
        {
            if (sum + a < 0)
            {
                break;
            }
            else
            {
                sum += a;
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
