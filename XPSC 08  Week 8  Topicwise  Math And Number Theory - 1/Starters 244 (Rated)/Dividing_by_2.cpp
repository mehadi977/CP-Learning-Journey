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
bool equl(vector<int> v)
{
    bool eql = true;
    int a = v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] != a)
            eql = false;
    }
    return eql;
}
void solve__()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt = 0;
    while (true)
    {

        if (equl(v))
            break;
        int mx = *max_element(all(v));
        for (int i = 0; i < n; i++)
        {
            if (v[i] == mx)
            {
                v[i] = v[i] / 2;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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