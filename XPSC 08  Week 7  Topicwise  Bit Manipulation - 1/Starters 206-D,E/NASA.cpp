// Problem Link:https://www.codechef.com/problems/PALIXOR

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
const int maxL = (1 << 15);
vector<int> allPalindorme;
bool is_palindrom(int n)
{
    string s = to_string(n);
    string t = s;
    reverse(all(t));
    return (s == t);
}
void markPalindrom()
{
    for (int i = 0; i < maxL; i++)
        if (is_palindrom(i))
            allPalindorme.pb(i);
}
void solve__()
{
    int n;
    cin >> n;
    vector<int> a(n), cnt(maxL + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    // for (int i = 0; i < cnt.size(); i++)
    // {
    //     cout << cnt[i] << " ";
    // }
    ll ans = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < allPalindorme.size(); j++)
        {
            int cur = a[i] ^ allPalindorme[j];
            ans += cnt[cur];
        }
    }
    cout << ans/2 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    markPalindrom();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}