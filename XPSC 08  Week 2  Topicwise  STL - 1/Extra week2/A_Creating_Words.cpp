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
        string s, t;
        cin >> s >> t;
        swap(s[0], t[0]);
        cout << s << " " << t << endl;
    }

    return 0;
}
