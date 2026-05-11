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
        int a, b;
        cin >> a >> b;
        if (100 * b > 225 * a)
            cout << "Small" << endl;
        else if (100 * b < 225 *a)
            cout << "Large" << endl;
        else
            cout << "Equal" << endl;
    }

    return 0;
}
