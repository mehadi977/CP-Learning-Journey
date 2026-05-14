// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    int ans = (a + c) - b + 1;
    if (a + c < b)
        cout << 0 << endl;
    else
        cout << ans << endl;

    return 0;
}
