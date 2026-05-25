// Problem Link:https://www.codechef.com/problems/TOYS

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    cout << max(0, n - m) << endl;

    return 0;
}
