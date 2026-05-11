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
        char a;
        cin >> a;
        if (a == 'c' || a == 'o' || a == 'd' || a == 'e' || a == 'f' || a == 'r' || a == 'c' || a == 'e' || a == 's')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
