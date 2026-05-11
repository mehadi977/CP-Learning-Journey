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
    // string s;
    // cin>>s;
    // cout<<s;

    // for (int i = 0; i < n; i++)
    // {
    //     char c;
    //     cin >> c;
    //     s.push_back(c);
    // }
    // s.pop_back();
    // cout << s << endl;
    // cout << s.front() << " " << s.back() << endl;
    // s.clear();
    // cout << s.empty() << endl;

    // substring
    string s;
    cin >> s;
    cout << s << endl;
    cout << s.substr(1, 3) << endl;
    cout << s.substr(2) << endl;

    return 0;
}
