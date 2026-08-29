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
    set<ll> st;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    ll crnt = 0, ans = 0;
    while (!st.empty())
    {
        auto i = st.lower_bound(crnt);
        auto rt = i;
        auto lft = st.end();
        if (rt != st.begin())
        {
            lft = rt;
            lft--;
        }
        if (lft == st.end())
        {
            ans += abs(crnt - *rt);
            crnt = *rt;
            st.erase((rt));
        }
        else if (rt == st.end())
        {
            ans += abs(crnt - *lft);
            crnt = *lft;
            st.erase(lft);
        }
        else
        {
            ll lft_dure = abs(crnt - *lft);
            ll rt_dure = abs(crnt - *rt);
            if (lft_dure <= rt_dure)
            {
                ans += lft_dure;
                crnt = *lft;
                st.erase(lft);
            }
            else
            {
                ans += rt_dure;
                crnt = *rt;
                st.erase(rt);
            }
        }
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