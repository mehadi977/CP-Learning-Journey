// Problem Link:

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define pb push_back
#define fi first
#define se second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"
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

void solve__()
{
    int x;
    cin >> x;
    int a, b;
    // print_bit(x);
    // cout << endl;
    int l = __lg(x);
    a = (1 << l);
    // print_bit(a);
    b = a ^ x;
    // cout << endl;
    // print_bit(b);
    // cout << endl
    //      << endl;
    cout << b << " " << a << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve__();
    }

    return 0;
}