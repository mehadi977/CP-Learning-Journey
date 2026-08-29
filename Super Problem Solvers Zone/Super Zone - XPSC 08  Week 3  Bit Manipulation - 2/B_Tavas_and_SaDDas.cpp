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
    string s;
    cin >> s;
    int bit = s.size();
    int full = 0;
    for (int i = 1; i < bit; i++)
    {
        full += (1 << i);
    }
    int partial = 0;
    reverse(all(s));
    for (int i = 0; i < bit; i++)
    {
        if (s[i] == '7')
            partial += (1 << i);
    }
    int idx = full + partial + 1;
    cout << idx << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}