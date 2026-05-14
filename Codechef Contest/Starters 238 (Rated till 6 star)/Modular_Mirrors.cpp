// Problem Link:https://www.codechef.com/problems/MODMIR
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
        ll n, m;
        cin >> n >> m;
        
        // A solution exists only when N ≡ 2 (mod 3)
        if (n % 3 != 2)
        {
            cout << -1 << endl;
            continue;
        }
        
        vector<ll> ans;
        ll a = 1;  // Can be any value in [1, M-1], using 1 for simplicity
        ll b = m - a;
        
        // Pattern for N = 2 + 3k:
        // [a, a] + [0, M-a, M-a] + [0, a, a] + [0, M-a, M-a] + ...
        ans.push_back(a);
        ans.push_back(a);
        
        // Add the remaining blocks of pattern [0, x, x]
        ll numBlocks = (n - 2) / 3;
        for (ll i = 1; i <= numBlocks; i++)
        {
            ans.push_back(0);
            if (i % 2 == 1)  // odd block: use M-a
            {
                ans.push_back(b);
                ans.push_back(b);
            }
            else  // even block: use a
            {
                ans.push_back(a);
                ans.push_back(a);
            }
        }
        
        for (ll i = 0; i < ans.size(); i++)
        {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
