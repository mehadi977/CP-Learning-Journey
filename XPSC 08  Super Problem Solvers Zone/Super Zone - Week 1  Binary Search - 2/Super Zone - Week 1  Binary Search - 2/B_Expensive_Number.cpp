#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string c;
        cin >> c;
        int l = 0, cnt = 0;
        for (int i = 0; i < c.size(); i++)
        {
            if (c[i] > '0')
                l = i, cnt++;
        }
        cout << c.size() - l + cnt - 2 << endl;
    }
}