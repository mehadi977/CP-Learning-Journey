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
        int a, b, c;
        cin >> a >> b >> c;
        int x = a + b + c;
        if (a == b + c || b == a + c || c == a + b)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}
