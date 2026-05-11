// Problem Link:

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;  
    for (int i = 1; i <= 7; i++)
    {
        if (x + (i * 4) > 24)
        {
            coxxxxut << i;
            break;
        }
    }

    return 0;
}
