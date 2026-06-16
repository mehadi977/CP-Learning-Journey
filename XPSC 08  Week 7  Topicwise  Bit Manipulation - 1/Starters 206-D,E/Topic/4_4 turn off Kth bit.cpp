#include <bits/stdc++.h>
using namespace std;
void print_bit(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        if (n >> i & 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
// 4.turn off Kth bit
int turn_off_Kth_bit(int n, int k)
{

    // int a = (1 << k);

    // return n & ~a;
    return n & ~(1 << k);
}
int main()
{
    int n, k;
    cin >> n >> k;
    print_bit(n);
    int ans = turn_off_Kth_bit(n, k);
    cout << endl
         << n << endl;
    print_bit(ans);
    cout << endl
         << ans;

    return 0;
}