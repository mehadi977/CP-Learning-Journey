// Problem Link:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D

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
int lower(vector<int> &a, int val)
{
    int ans = -1, l = 0, r = a.size() - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] >= val)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return ans + 1;
}
void solve__()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // sort(rall(a));
    sort(all(a));
    int k;
    cin >> k;
    while (k--)
    {
        int lft, rt;
        cin >> lft >> rt;
        // int l = lower(a, lft);
        // int r = lower(a, rt + 1);
        // cout << l - r << " ";
        auto x = lower_bound(all(a), lft) - a.begin();
        auto y = upper_bound(all(a), rt) - a.begin();
        cout << y - x << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}