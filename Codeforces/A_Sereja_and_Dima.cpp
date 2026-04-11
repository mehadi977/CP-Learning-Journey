// Problem Link:

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
        cin >> dq[i];
        // cout << dq[i] << " ";
    }
    int sereja = 0, dima = 0, pos = 1;
    while (!dq.empty())
    {
        int lft = dq.front(), rt = dq.back(), mx = 0;
        mx = max(lft, rt);
        if (pos % 2 == 1)
            sereja += mx;
        else
            dima += mx;
        pos++;
        if (dq.front() == mx)
            dq.pop_front();
        else
            dq.pop_back();
    }
    cout << sereja << " " << dima;

    return 0;
}
