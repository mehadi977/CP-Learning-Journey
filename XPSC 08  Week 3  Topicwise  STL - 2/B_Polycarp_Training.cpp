// Problem Link: https://codeforces.com/problemset/problem/1165/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    // for (int a : s)
    //     cout << a << " ";
    int cnt = 0;
    int day = 1;
    // lower bound
    while (!s.empty())
    {
        auto lb = s.lower_bound(day);
        if (lb != s.end())
        {
            cnt++;
            s.erase(lb);
        }
        else
            break;
        day++;
    }
    // my logic
    //  for (int a : s)
    //  {
    //      if (a >= day)
    //      {
    //          cnt++;
    //          day++;
    //      }
    //  }
    cout << cnt;

    return 0;
}
