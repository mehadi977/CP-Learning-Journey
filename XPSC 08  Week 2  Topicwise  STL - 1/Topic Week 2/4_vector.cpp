// Problem Link:

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
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // cout << endl
    //      << v.front() << " " << v.back() << endl;
    // v.clear();
    // for (int a : v)
    //     cout << a << " ";

    // assign
    //  vector<int> v(n, 5);
    //  for (int a : v)
    //      cout << a << " ";

    // assign function
    // vector<int> v;
    // v.assign(n, 5);
    // for (int a : v)
    //     cout << a << " ";

//resize
   vector<int> v;
    v.resize(6);
    for (int a : v)
        cout << a << " ";

    return 0;
}
