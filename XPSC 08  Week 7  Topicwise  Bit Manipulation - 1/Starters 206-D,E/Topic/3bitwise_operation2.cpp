#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 21, b = 14, c = 5, d = 15;
    int x = a & b & c & d;
    int y = a | b | c | d;
    int z = a ^ b ^ c ^ d;
    cout << x << endl
         << y << endl
         << z << endl;

    return 0;
}