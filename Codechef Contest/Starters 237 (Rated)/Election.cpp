// Problem Link:https://www.codechef.com/START237D/problems/ELECTION1
//A
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
    int a = (n / 2) + 1;
    if (a - k < 0)
        cout << 0;
    else
        cout << a - k;

    return 0;
}
