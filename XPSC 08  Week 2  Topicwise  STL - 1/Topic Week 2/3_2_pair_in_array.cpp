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
    pair<string, int> student[n];
    for (int i = 0; i < n; i++)
    {
        cin >> student[i].first >> student[i].second;
    }

    // for (int i = 0; i < n; i++)
    //     cout << student[i].first << " " << student->second << endl;

    // range base
    //  for (auto a : student)
    //      cout << a.first << " " << a.second << endl;

    // 2nd way
    for (auto [x, y] : student)
        cout << x << y << endl;
    return 0;
}
