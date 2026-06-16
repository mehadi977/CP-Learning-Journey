#include <bits/stdc++.h>
using namespace std;
// 2.print on and off Kth bit
void print_on_and_off_Kth_bit(int n)
{
    for (int k = 7; k >= 0; k--)
    {
        if (n >> k & 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    print_on_and_off_Kth_bit(n);

    return 0;
}