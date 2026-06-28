#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    return __gcd(a, b); // O(log(min(a,b)))
}
int LCM(int a, int b)
{
    // return (a * b) / __gcd(a, b); // O(log(min(a, b)))
    return (a / __gcd(a, b)) * b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD-> " << GCD(a, b) << endl;
    cout << "LCM-> " << LCM(a, b) << endl;

    return 0;
}