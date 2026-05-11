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
        string s;
        cin >> s;
        int mxLen = 0;
        int len = 0;
        for (int i = 0; i < n; i++)
        {
            int pos = len + 1;
            if (pos % 2 == 1)
            {
                if (s[i] == 'u' || s[i] == 'o')
                    len++;
                else
                    len = 0;
            }
            else
            {
                if (s[i] == 'w')
                    len++;
                else
                    len = 0;
                if (s[i] == 'u' || s[i] == 'o')
                    len = 1;
            }
            if (len % 2 == 1)
                mxLen = max(len, mxLen);
        }

        cout << mxLen << endl;
    }
    return 0;
}
