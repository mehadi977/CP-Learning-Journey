// Problem Link:https://www.codechef.com/problems/PAYSC

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int ans = 100 + (4 * x);
    cout << min(ans, 300);

    return 0;
}
