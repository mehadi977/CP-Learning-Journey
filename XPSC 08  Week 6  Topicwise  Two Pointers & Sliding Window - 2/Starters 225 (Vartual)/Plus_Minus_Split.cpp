// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
bool AllEqual(vector<int> &v)
{
    bool equal = true;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != v[0])
            equal = false;
    }
    return equal;
}
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

        if (AllEqual(v))
            cout << "Yes" << endl;
        else
        {
            bool equal = false;
            for (int i = 0; i < n; i++)
            {
                vector<int> check(n);
                for (int j = 0; j < n; j++)
                {
                    if (j < i)
                        check[j] = v[j] + v[i];
                    else
                        check[j] = v[j] - v[i];
                }
                if (AllEqual(check))
                {
                    equal = true;
                    break;
                }
            }
            if (equal)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

    return 0;
}
