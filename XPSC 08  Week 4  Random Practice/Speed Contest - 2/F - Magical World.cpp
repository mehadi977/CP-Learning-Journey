// Problem Link:

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
        ll a, b, x;
        cin >> a >> b >> x;
        ll squer = x * x;
        ll rect = a * b;
        if (squer >= rect)
            cout << 0 << endl;
        else
        {
            if (squer >= a || squer >= b)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }

    return 0;
}
