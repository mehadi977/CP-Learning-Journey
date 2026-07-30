// GCD er jonno common factor gulor choto ta selet korte hobe. tarpr segulor gun = gcd;
// LCM er jonno common factor gulor boro ta select korte hobe. tarpor segululor gun = gcd;

#include <bits/stdc++.h>
using namespace std;
int LCM(int a, int b)
{
    return (a / __gcd(a, b) * b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    cout << LCM(a, b) << endl;

    return 0;
}