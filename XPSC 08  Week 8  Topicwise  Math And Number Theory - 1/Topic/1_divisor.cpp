#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (n % i == 0)
    //         cout << i << endl;
    // }
    vector<int> divisor;
    // sqrt(n) == i*i;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            // cout << i << endl;
            divisor.push_back(i);
            if (n / i != i)
                // cout << n / i << endl;
                divisor.push_back(n / i);
        }
    }
    sort(divisor.begin(), divisor.end());
    for (int a : divisor)
        cout << a << endl;

    return 0;
}