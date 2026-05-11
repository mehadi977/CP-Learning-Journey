// Problem Link:https://www.codechef.com/problems/VACCLOTH

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (n >= 7)
        cout << 7;
    else
        cout << n;

    return 0;
}
