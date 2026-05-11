#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, set<int>> mps;

    set<int> st1;
    st1.insert(2);
    st1.insert(4);
    st1.insert(2);
    st1.insert(8);

    set<int> st2;
    st2.insert(2);
    st2.insert(29);
    st2.insert(4);
    st2.insert(9);

    set<int> st3;
    st3.insert(6);
    st3.insert(0);
    st3.insert(1);
    st3.insert(4);
    mps[3] = st1;
    mps[5] = st2;
    mps[9] = st3;
    set<int> st4;
    st4.insert(5);
    st4.insert(292);
    st4.insert(8);
    mps[99] = st4;
    for (auto [x, y] : mps)
    {
        cout << x << "-> ";
        for (auto a : y)
            cout << a << " ";
        cout << endl;
    }
    int x = 7, y = 7;
    auto LB1 = mps.lower_bound(x);
    if (LB1 != mps.end())
    {
        auto ans = LB1->first;
        cout << ans << "-> ";
        auto LB2 = mps[ans].lower_bound(y);
        if (LB2 != mps[ans].end())
            cout << *LB2;
        else
            cout << "Not found'y'";
    }
    else
        cout << "Notfound 'x'";

    return 0;
}