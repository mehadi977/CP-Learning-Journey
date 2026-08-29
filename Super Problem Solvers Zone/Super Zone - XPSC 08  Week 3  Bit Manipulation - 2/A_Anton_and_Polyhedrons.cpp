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
    int te = 4, cu = 6, oc = 8, dod = 12, ic = 20;
    ll ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
            ans +=ic;
        else if (s == "Cube")
            ans += cu;
        else if (s == "Tetrahedron")
            ans += te;
        else if (s == "Dodecahedron")
            ans += dod;
        else if (s == "Octahedron")
            ans += oc;
    }
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}