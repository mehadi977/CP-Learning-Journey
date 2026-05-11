// Problem Link:https://codeforces.com/problemset/problem/1468/C

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q, serial = 1;
    cin >> q;
    set<pair<int, int>> monocrp;
    multiset<pair<int, int>> polycrp;
    vector<int> ans;
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int mony;
            cin >> mony;
            monocrp.insert({serial, mony});
            polycrp.insert({mony, -serial});
            serial++;
        }
        else if (type == 2)
        {
            int pos = monocrp.begin()->first, money = monocrp.begin()->second;
            ans.push_back(pos);
            monocrp.erase(monocrp.begin());
            polycrp.erase({money, -pos});
        }
        else if (type == 3)
        {
            int pos = -polycrp.rbegin()->second, money = polycrp.rbegin()->first;
            ans.push_back(pos);
            polycrp.erase(--polycrp.end());
            monocrp.erase({pos, money});
        }
    }
    for (int a : ans)
        cout << a << " ";
    cout << endl;
    return 0;
}
