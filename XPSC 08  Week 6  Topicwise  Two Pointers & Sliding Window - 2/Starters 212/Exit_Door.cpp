// Problem Link: https://www.codechef.com/problems/P3BAR

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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ans = 0;
    int i = 0;
    while (!v.empty())
    {
       
        int mx = *max_element(v.begin(), v.end());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == mx)
            {
                if (i < v.size() / 2)
                {
                    ans += i;
                    v.erase(v.begin() + i);
                }
                else
                {
                    ans += v.size() - i-1;
                    v.erase(v.begin() + i);
                }
                break;
            }
        }
    }
    cout << ans << endl;
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