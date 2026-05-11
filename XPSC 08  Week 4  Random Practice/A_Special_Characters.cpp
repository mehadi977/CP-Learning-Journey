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
        if (n % 2 == 1)
            cout << "NO" << endl;
        else
        {
            string ans;
            cout << "YES" << endl;
            int lm = n / 2;
            for (int i = 0; i < lm; i++)
            {
                char c = 'A' + i;
                ans.push_back(c);
                ans.push_back(c);
            }

            cout << ans << endl;
        }
    }

    return 0;
}
