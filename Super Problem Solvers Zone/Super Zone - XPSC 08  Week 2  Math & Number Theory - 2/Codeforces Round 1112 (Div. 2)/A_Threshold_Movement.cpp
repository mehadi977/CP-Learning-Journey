#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"

bool check(vector<int> &v, int n, bool firstRight)
{
    int low = 0;
    int high = 1000000001;

    for (int i = 1; i <= n; i++)
    {
        bool right;

        if (firstRight)
            right = (i % 2 == 1);
        else
            right = (i % 2 == 0);

        if (right)
        {
            // w[i] > k  =>  k < w[i]
            high = min(high, v[i]);
        }
        else
        {
            // w[i] < k  =>  k > w[i]
            low = max(low, v[i]);
        }
    }

    return (low + 1 < high);
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    if (check(v, n, true) || check(v, n, false))
        yes;
    else
        no;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}