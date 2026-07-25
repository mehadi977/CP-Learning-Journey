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
    vector<int> a(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    int cnt60 = 0, cnt30 = 0;
    for (int x : a)
    {
        if (x >= 60)
            cnt60++;
        if (x >= 30)
            cnt30++;
    }
    if (cnt60 >= 2 && cnt30 >= 4)
        cout << "Pass";
    else
        cout << "Fail";
    cout << endl;
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