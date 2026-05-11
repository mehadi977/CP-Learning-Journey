// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    int ans = x * 100;
    int a= y-x;
    ans += (a * 150);
    cout << ans;

    return 0;
}
