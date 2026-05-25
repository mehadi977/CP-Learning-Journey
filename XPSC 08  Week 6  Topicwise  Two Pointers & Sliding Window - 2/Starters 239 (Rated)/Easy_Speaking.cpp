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

void solve_Mehadi()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            cnt++;
            if (cnt == 4)
            {
                found = true;
                break;
            }
        }
        else
            cnt = 0;
    }
    if (found)
        yes;
    else
        no;
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