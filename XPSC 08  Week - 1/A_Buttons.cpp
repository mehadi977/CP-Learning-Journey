// Problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b)
        cout << a + max(a - 1, b);

    else
        cout << b + max(b - 1, a);
    return 0;
}
