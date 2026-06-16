#include <bits/stdc++.h>
using namespace std;
void pirnt_bit(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        if (n >> i & 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
// 3.turn on Kth bit
int turn_on_Kth_bit(int &n, int k)
{

    int a = (1 << k) | n;
    return a;
}
int main()
{
    int n, k;
    cin >> n >> k;
    pirnt_bit(n);

    int a = turn_on_Kth_bit(n, k);
    cout << endl
         << n << endl;
    pirnt_bit(a);
    cout << endl
         << a;
    return 0;
}