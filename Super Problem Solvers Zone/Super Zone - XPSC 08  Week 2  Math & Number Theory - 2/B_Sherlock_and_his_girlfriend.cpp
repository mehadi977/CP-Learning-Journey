// Problem Link:https://codeforces.com/problemset/problem/776/B

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
    vector<int> ans;
    vector<bool> isPrime(n + 5, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < n + 5; i++)
    {
        if (isPrime[i])
        {
            for (int j = i + i; j < n + 5; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    int color=1;
    bool color1 = false, color2 = false;
    for (int i = 2; i <= n + 1; i++)
    {
        if (isPrime[i])
        {
            ans.pb(1);
            color1 = true;
        }
        else
        {
            color2 = true;
            ans.pb(2);
            color=2;
        }
        // cout << i << " -> " << isPrime[i] << " " << endl;
    }

    // if (color1 && color2)
    //     cout << 2 << endl;
    // else
    //     cout << 1 << endl;
    cout<<color<<endl;
    for (int a : ans)
        cout << a << " ";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}