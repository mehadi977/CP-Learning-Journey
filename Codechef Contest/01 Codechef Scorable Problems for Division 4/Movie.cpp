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
        int n, m, a, b, c;
        cin >> n >> m >> a >> b >> c;
        int cmb = min(n, m);
        int ans = 0;
        ans = cmb * c;
        int rem_n = n - cmb;
        int rem_m = m - cmb;
        ans += (rem_n * a) + (rem_m * b);
        cout << ans << endl;
    }

    return 0;
}
