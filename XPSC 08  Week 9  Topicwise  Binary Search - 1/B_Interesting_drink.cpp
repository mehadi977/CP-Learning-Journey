// Problem Link: https://codeforces.com/problemset/problem/706/B

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
int is_interestring(vector<int> &a, int key)
{
    int l = 0, r = a.size() - 1, mid, ans = 0;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] <= key)
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans;
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
    sort(all(v));
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << is_interestring(v, x) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}