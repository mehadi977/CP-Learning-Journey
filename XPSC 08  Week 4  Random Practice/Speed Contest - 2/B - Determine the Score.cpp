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
        int x, n;
        cin >> x >> n;
        cout << (x / 10) * n << endl;
    }

    return 0;
}
