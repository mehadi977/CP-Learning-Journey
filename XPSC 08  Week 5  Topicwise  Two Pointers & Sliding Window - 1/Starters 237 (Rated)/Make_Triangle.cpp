// Problem Link:https://www.codechef.com/START237D/problems/MAKETRIANGLE
//B
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
        vector<int> v(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
            // cout << v[i] << " ";
        }
        sort(v.begin(), v.end());
        if (v[0] + v[1] > v[2])
            cout << 0 << endl;
        else
        {
            int a = v[0] + v[1];
            cout << v[2] - a + 1 << endl;
        }

        // cout << endl;
        // if (x + y > z || x + z > y || z + y > x)
        //     cout << 0 << endl;
        // else
        //     cout << 1 << endl;
    }

    return 0;
}
