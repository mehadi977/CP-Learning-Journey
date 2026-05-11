// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // iterator----
    //  begin()--1st location
    // end()--last er porer location
    // rbegin()--last location
    // rend()--1st er ager location
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    auto it = v.begin() + 1;
    cout << "begin" << " " << *it << endl;
    auto end = --v.end();
    cout << "end" << " " << *end << endl;
    auto rbegin = v.rbegin();
    cout << "rbegin" << " " << *rbegin << endl;
    auto rend = v.rend();
    cout << "rend" << " " << *rend << endl;

    // sort()
    // sort(v.begin(), v.end());

    // sort(v.rbegin(), v.rend());

    // reverse()
    // reverse(v.begin(), v.end());

    // print by it
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
    // min element
    auto mn = min_element(v.begin(), v.end());
    cout << "mn " << *mn << endl;
    auto mx = max_element(v.begin(), v.end());
    cout << "mx " << *mx << endl;

    // mx element position
    auto mxPos = mx - v.begin();
    cout << mxPos << endl;

    return 0;
}
