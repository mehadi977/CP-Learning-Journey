// Problem Link: https://cses.fi/problemset/task/1083

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans;
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        // cout << a[i] << " ";
    }
 
    sort(a.begin(), a.end());

    auto f = find(a.begin(), a.end(), n);
    if (f == a.end())
        cout << n;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}
