// Problem Link:https://codeforces.com/problemset/problem/918/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    map<string, string> name;
    for (int i = 0; i < n; i++)
    {
        string nm, ip;
        cin >> nm >> ip;
        name[ip] = nm;
    }
    vector<pair<string, string>> comand;
    for (int i = 0; i < m; i++)
    {
        string nm, ip;
        cin >> nm >> ip;
        comand.push_back({nm, ip});
    }

    // for (auto [nm, ip] : name)
    // {
    //     cout << nm << " " << ip << endl;
    // }
    // cout << endl;
    // for (auto [nm, ip] : comand)
    // {
    //     cout << nm << " " << ip << endl;
    // }
    // cout << name["192.168.0.1"];
    for (auto [nm, ip] : comand)
    {
        ip.pop_back();
        cout << nm << " " << ip << "; " << "#" << name[ip] << endl;
    }

    return 0;
}
