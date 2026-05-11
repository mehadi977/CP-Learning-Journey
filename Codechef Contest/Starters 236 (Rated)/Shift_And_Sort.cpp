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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                int total = v[i] + v[i + 1];
                int hf = total / 2;
                v[i] = hf;
                v[i + 1] = total - hf;
                i++;
            }
        }
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            // cout << v[i] << " ";
            if (v[i] > v[i + 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
