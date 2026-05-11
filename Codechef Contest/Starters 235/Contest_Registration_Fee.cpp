// Problem Link:https://www.codechef.com/problems/P1235

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
    if (x >= y)
        cout << 0;
    else
        cout << 100;
    return 0;
}
