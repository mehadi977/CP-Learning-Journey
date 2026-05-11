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
        vector<int> v(2 * n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        vector<int> pl;
        int i = 0, j = 2 * n - 1;
        while (i < j)
        {
            if (v[i] == v[j])
                pl.push_back(v[i]);
            else
            {
                v.pop_back();
            }
            i++;
            j--;
        }
        for (int a : pl)
            cout << a << " ";
        cout << endl;
    }

    return 0;
}
