// deque er kaj vector er motoi etr extra subidha holo front and back dui side thekei value insert and delete korte pare
// vector er tulonai double memory lage
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        // int x;
        // cin >> x;
        // dq.push_back(x);
        cin >> dq[i];
    }
    dq.push_back(88);
    dq.push_front(22);
    dq.pop_back();
    dq.pop_front();
    dq.pop_front();
    // sort(dq.begin(), dq.end());
    for (int a : dq)
        cout << a << " ";
    cout << endl
         << dq.front() << " " << dq.back();
    return 0;
}
