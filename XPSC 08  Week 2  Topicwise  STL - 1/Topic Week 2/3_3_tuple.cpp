// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // tuple<string, int, string> t = make_tuple("rahim", 125, "017");
    tuple<string, int, char, string > t = {"karim", 3, 'A', "018"};

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << endl;

    auto [name, roll, section, number] = t;
    cout << name << " " << roll << " " << section << " " << number;

    return 0;
}
