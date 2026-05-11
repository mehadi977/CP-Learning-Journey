// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if (*s.begin() == 's' || *s.rbegin() == 's')
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
