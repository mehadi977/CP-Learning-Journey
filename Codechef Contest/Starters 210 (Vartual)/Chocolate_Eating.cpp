// Problem Link:https://www.codechef.com/problems/CHOCEAT?tab=statement

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << a + b - 1 << endl;
        else
            cout << a + b << endl;
    }

    return 0;
}
