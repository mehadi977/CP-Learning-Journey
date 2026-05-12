// Problem Link: https://www.codechef.com/problems/P1149

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int x, y, k;
    cin >> x >> y >> k;
    abs(x);

    if (abs(x - y) <= k)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
