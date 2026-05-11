// Problem Link:https://www.codechef.com/problems/BAKERY7

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    cout << min(n * 100, k + n * 60);

    return 0;
}
