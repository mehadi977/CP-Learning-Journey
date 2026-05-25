// Problem Link:https://www.codechef.com/problems/LMP3

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

void solve_Mehadi()
{
    string s;
    cin >> s;
    if ((s.back() - '0') % 2 == 1)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    bool ok = false;
    while (stoi(s) > 0)
    {
        if (ok == true)
        break;
        cnt++;
        for (char a : s)
        {
            if ((a - '0') % 2 == 1)
            {
                ok = true;
                break;
            }
        }
        int x = INT_MIN;
        for (int i = 0; i < s.size(); i++)
        {
            x = max(x, s[i] - '0');
        }
        int num = stoi(s);
        num -= x;
        s = to_string(num);
    }
    if (ok)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve_Mehadi();
    }

    return 0;
}