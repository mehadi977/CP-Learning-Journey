// Problem Link:https://www.codechef.com/START237D/problems/FINELE
//D
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        while (a.size() != 1)
        {
            vector<int> b;
            for (int i = 0; i < a.size() - 1; i++)
            {
                b.push_back(a[i] ^ a[i + 1]);
            }
            a = b;
            // for (auto x : b)
            //     cout << x << " ";
            // cout << endl;
        }
        cout
            << a[0] << endl;
    }

    return 0;
}
