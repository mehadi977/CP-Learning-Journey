#include <bits/stdc++.h>
using namespace std;
// 1.check Kth bit on or off
bool check_Kth_bit_on_or_off(int n, int k)
{
    // if (n >> k & 1)
    //     return true;
    // else
    //     return false;
    return n >> k;
}
int main()
{

    int n = 109;
    int k = 3; // 3 mane 4th bit zero theke suru
    bool on_of = check_Kth_bit_on_or_off(n, k);
    if (on_of)
        cout << 1;
    else
        cout << 0;
    // cout << 1101010;

    return 0;
}