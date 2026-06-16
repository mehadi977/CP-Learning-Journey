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
// 5.toggle Kth bit
int toggle_Kth_bit(int n, int k)
{
    return n ^ (1 << k);
}
int main()
{
    int n, k;
    cin >> n >> k;
    pirnt_bit(n);
    cout << endl
         << n << endl;
    int ans = toggle_Kth_bit(n, k);
    pirnt_bit(ans);
    cout << endl
         << ans << endl;

    return 0;
}