// Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans;
    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            ans = i;
            break;
        }
    }
    if (ans == 0)
        cout << -1;
    else
        cout << ans << endl;
    return 0;
}
