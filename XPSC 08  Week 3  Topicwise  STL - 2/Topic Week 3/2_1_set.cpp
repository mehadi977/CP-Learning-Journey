// 1.sorted...
// 2.unique...
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    // auto it = s.begin();
    // it++;
    // it--;
    // print---------
    //  cout << *it << endl;
    //  for (auto i = s.begin(); i != s.end(); i++)
    //  {
    //      cout << *i << " ";
    //  }

    // for (auto a : s)
    //     cout << a << " ";

    // find a vlue================  ==========
    // auto it = s.find(8);
    // auto it = s.find(11);
    // if (it != s.end())
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;

    // erase a value========================
    // fst ck kore nite hobe value ta ache kina:--find() function diye
    //  s.erase(1);
    //  for(auto a:s)
    //  cout<<a<<" ";

    // coutnt function=======================
    // vlue jodi set e thake tahole 1 return korbe na thakle 0 return kore

    // cout << s.count(3)<<endl;
    // cout << s.count(1)<<endl;
    // cout << s.count(9)<<endl;
    // if (s.count(8))
    //     cout << "Found" << endl;
    // else
    //     cout << "Not Found" << endl;

    // lower bound=====================
    //  >=orthat jodi value set e thake thole oi value pass korbe else tar theke imideat boro value ta return korbe
    //  auto it =s.lower_bound(2);
    int x;
    cin >> x;

    // auto it = s.lower_bound(x);
    // // cout << *it << endl;
    // if (it == s.end())
    //     cout << "END" << endl;
    // else
    //     cout << *it << endl;

    // upper bound========================
    //  search deoa value ta thakuk ba na thakuk or theke boro value return korbe, kono boro value na thakle end return korbe
    auto it = s.upper_bound(x);
    if (it == s.end())
        cout << "END" << endl;
    else
        cout << *it << endl;
    return 0;
}