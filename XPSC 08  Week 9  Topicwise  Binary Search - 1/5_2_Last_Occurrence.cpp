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
int Last_Occurrence(vector<int> &v, int key)
{
    int l = 0, r = v.size() - 1, mid, ans = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (key == v[mid])
        {
            ans = mid + 1;
            l = mid + 1;
        }
        else if (key < v[mid])
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
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
    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        cout << Last_Occurrence(v, key) << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve__();

    return 0;
}