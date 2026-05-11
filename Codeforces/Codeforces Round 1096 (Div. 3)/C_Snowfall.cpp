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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll div;
        vector<ll> divby6, divby2, divby3, other;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 6 == 0)
                divby6.push_back(v[i]);
            else if (v[i] % 2 == 0)
                divby2.push_back(v[i]);
            else if (v[i] % 3 == 0)
                divby3.push_back(v[i]);
            else
                other.push_back(v[i]);
        }
        for (auto a : divby6)
            cout << a << " ";
        for (auto a : divby2)
            cout << a << " ";
        for (auto a : other)
            cout << a << " ";
        for (auto a : divby3)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}
