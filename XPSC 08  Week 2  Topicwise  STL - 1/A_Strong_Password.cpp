// Problem Link:https://codeforces.com/problemset/problem/1997/A

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
        string s;
        cin >> s;
        int pos = -1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == s[i - 1])
            {
                pos = i;
                break;
            }
        }
        if (pos != -1)
        {

            if (s[pos] == 'z')
            {
                s.insert(pos, 1, 'a');
            }
            else
                s.insert(pos, 1, s[pos] + 1);
        }
        else
        {
            if (s.back() == 'z')
                s.push_back('a');
            else
                s.push_back(s.back() + 1);
        }

        cout << s << endl;
    }

    return 0;
}
