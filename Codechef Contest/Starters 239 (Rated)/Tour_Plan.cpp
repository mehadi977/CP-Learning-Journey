// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y, z;
    cin >> x >> y >> z;
    if (z <= 50)
        cout << x << endl;
    else
    {
        int a = z - 50;
        cout << x + a * y << endl;
    }

    return 0;
}
