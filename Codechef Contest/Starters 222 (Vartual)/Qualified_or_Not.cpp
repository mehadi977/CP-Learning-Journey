// Problem Link:https://www.codechef.com/problems/QNOT

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x, y;
    cin >> n >> x >> y;

    if (n >= 2 * x && n >= 2 * y)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
