#include <bits/stdc++.h>
using namespace std;
int main()
{
    // map er key te ekta vector rakha:==
    map<vector<int>, int> mp;
    vector<int> a;
    a.push_back(2);
    a.push_back(4);
    a.push_back(6);
    a.push_back(8);
    mp[a] = 5;

    for (auto [x, y] : mp)
    {
        for (auto a : x)
            cout << a << " ";
        cout << "val->" << y;
    }


    return 0;
}