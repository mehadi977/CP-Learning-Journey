// map key value pair hisebe rakhe
// unic key
// key er upor value gulo sorted thake
//  Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // // map declar=======================
    // map<int, int> mp;
    // // value insert------
    // mp.insert({10, 20});
    // mp.insert({2, 9});
    // // key diye print-------
    // cout << mp[10] << endl;
    // cout << mp[2] << endl;

    // esey declar=====================
    map<int, int> mp;
    mp[2] = 22;
    mp[3] = 33;
    mp[9] = 44;
    mp[5] = 55;
    mp[7] = 77;
    mp[2] = 111;
    // cout << mp[2] << endl;
    // cout << mp[3] << endl;
    // cout << mp[4] << endl;
    // print map----------------
    // for (auto [key, value] : mp)
    //     cout << key << "->" << value << endl;
    // another way---
    // for (auto it : mp)
    // {
    //     int key = it.first, val = it.second;
    //     cout << key << " --> " << val << endl;
    // }
    // find() by key----------------
    // auto it = mp.find(55);
    // auto it = mp.find(2);
    // if (it == mp.end())
    //     cout << "Key not found" << endl;
    // else
    //     cout << it->first << " " << it->second << endl;

    // cout << endl;
    // erese-----------------------
    // mp.erase(442);
    // auto it = mp.find(2);
    // if (it != mp.end())
    //     mp.erase(it);
    for (auto it : mp)
    {
        int key = it.first, val = it.second;
        cout << key << " --> " << val << endl;
    }

    // itarator
    // auto it = mp.begin();
    cout << endl;
    //      << it->first << " " << it->second << endl;
    // it++;
    // cout << it->first << " " << it->second << endl;
    // auto lst=--mp.end();
    // auto lst = mp.rbegin();
    // cout << lst->first << " " << lst->second << endl;

    //upper bound, lower bonud-----------------

    // auto it = mp.lower_bound(6);
    // auto it = mp.lower_bound(4);
    // cout << it->first << " " << it->second << endl;

    // auto it = mp.upper_bound(4);
    // cout << it->first << " " << it->second << endl;

    return 0;
}
