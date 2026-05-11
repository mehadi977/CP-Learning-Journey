// Problem Link:https://codeforces.com/problemset/problem/1907/B

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
        stack<int> upper, lower;
        // string track;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                if (s[i] == 'B' && !upper.empty())
                {
                    upper.pop();
                }
                else if (s[i] != 'B')
                {
                    upper.push(i);
                }
            }
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                if (s[i] == 'b' && !lower.empty())
                {
                    lower.pop();   
                }
                else if (s[i] != 'b')
                {
                    lower.push(i);
                }
            }
        }
        vector<int> trac;
        while (!upper.empty())
        {
            trac.push_back(upper.top());
            upper.pop();
        }
        while (!lower.empty())
        {
            trac.push_back(lower.top());
            lower.pop();
        }
        sort(trac.begin(), trac.end());

        // for (int a : trac)
        //     cout << a << " ";
        // cout << endl;
        for (int a : trac)
            cout << s[a];
        cout << endl;
    }

    return 0;
}
