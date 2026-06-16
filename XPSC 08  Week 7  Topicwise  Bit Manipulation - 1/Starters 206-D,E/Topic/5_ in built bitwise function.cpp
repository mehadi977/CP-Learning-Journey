#include <bits/stdc++.h>
using namespace std;
void print_bit(int n)
{
    for (int i = 7; i >= 0; i--)
    {
        if ((n >> i) & 1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    print_bit(n);

    // koto gulo on bit ache tar count function ====
    cout << endl
         << "On bit count-> "
         << __builtin_popcount(n) << endl;

    // hight setbit ta koto tomo position e ache othoba MSB 
    cout << "high setbit, MSB-> " << __lg(n) << endl;

    return 0;
}