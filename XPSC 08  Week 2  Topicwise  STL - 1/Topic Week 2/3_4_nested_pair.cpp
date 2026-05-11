// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pair<string, pair<int, char>> p = {"sakib", {3, 'B'}};
    string name = p.first;
    int roll = p.second.first;
    char section = p.second.second;
    cout << name << " " << roll << " " << section << " ";

    return 0;
}
