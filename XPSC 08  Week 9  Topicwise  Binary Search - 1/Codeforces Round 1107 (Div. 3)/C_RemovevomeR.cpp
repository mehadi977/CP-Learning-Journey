// Problem Link:

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve__()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool same = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[0])
            same = false;
    }
    if (same)
    {
        cout << 1 << endl;
        return;
    }
    int sz = s.size();
    while (sz >= 1)
    {
        bool found2 = false;
        sz = s.size();
        for (int i = 0; i + 1 < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                found2 = true;
                s.erase(s.begin() + i);
                break;
            }
        }
        bool found3 = false;
        if (found2 == false)
            for (int i = 0; i + 2 < s.size(); i++)
            {
                if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
                {
                    s.erase(s.begin() + i + 1);
                    found3 = true;
                    break;
                }
                else if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
                {
                    s.erase(s.begin() + i + 1);
                    found3 = true;
                    break;
                }
            }

        if (found2 == false && found3 == false)
            break;
    }
    cout << s.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}