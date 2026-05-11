// sorted-
// duplicate allowed
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    // for (auto a : ms)
    //     cout << a << " ";
    // find==========================
    // auto it = ms.find(5);
    // if (it != ms.end())
    //     cout << "found";
    // else
    //     cout << "not found";
    // erase========================
    // ms.erase(5); // O(logN+K) k=oi value ta kotobar ache
    // multiple thakle sob value e dlt hoye jai
    // ms.erase(9)  // O(logN) jeta sudhu ekbar e ache

    // multiple thakleo sudhu ekta value erase korar way---------------
    // auto it = ms.find(5);
    // ms.erase(it);

    for (auto a : ms)
        cout
            << a << " ";

    // count===========================
    // count() function er maddhome oi value ti kotobar ache seta return paoa jabe
    // O(logN)->jodi ekbar thake
    // O(logN+k)->k sonkhok bar thakle
    // cout << ms.count(9) << endl;
    // cout << ms.count(5) << endl;

    // lower bound===============
    // auto it = ms.lower_bound(5);
    // if (it == ms.end())
    //     cout << "END" << endl;
    // else
    //     cout << *it << endl;
    // upper bound================
    auto it = ms.upper_bound(9);
    if (it == ms.end())
        cout << "END" << endl;
    else
        cout << *it << endl;
    return 0;
}