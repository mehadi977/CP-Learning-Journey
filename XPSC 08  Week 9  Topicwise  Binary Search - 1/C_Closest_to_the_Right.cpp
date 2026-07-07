// Problem Link:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C

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
int Closest_to_the_right(vector<int> &a, int key)
{
    int l = 0, r = a.size() - 1, mid;
    int ans = a.size() + 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (key <= a[mid])
        {
            ans = mid + 1;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}

void solve__()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        int key;
        cin >> key;
        cout << Closest_to_the_right(v, key) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}