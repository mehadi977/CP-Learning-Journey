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
        int n;
        cin >> n;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c == '(')
                a++;
            else if (c == ')')
                b++;
        }
        if (a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
