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
    if (n == 1)
        cout << 1 << endl;
  
    else if (n % 2 == 1)
        cout
            << n / 2 << endl;
    else
        cout << n / 2 + 1 << endl;
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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios ::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;
        string num;
        cin >> num;

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (num[i] == '1')
                ans++;
        }

        cout << ans + k << endl;
    }

    return 0;
}