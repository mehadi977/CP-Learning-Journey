#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // (2^n)-1 sonkhok value er bit er representation gulo holo n sonkhok value er subset
    for (int mask = 0; mask < (1 << n); mask++)
    {
        // cout << i << endl;
        for (int k = 0; k < n; k++)
        {
            if ((mask >> k) & 1)
            {
                // Kth bit on
                cout << 1 << " ";
            }
            else
            {
                // Kth bit off
                cout << 0 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}