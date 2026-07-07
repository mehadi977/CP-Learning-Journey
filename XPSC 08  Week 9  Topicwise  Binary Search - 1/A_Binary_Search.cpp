// Problem Link:https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

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
bool Binary_Search(vector<int>& a, int key)
{
    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
            return true;
        else if (a[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return false;
}
void solve__()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // for (int s : a)
    //     cout << s;
    while (k--)
    {
        int key;
        cin >> key;
        if (Binary_Search(a, key))
            yes;
        else
            no;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}