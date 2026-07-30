#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> prime(101, true);
    for (int i = 2; i * i <= 100; i++)
    {
        if (prime[i])
            for (int j = i + i; j <= 100; j += i)
            {
                prime[j] = false;
            }
    }
    vector<int> allPrimes;
    for (int i = 2; i <= 100; i++)
    {
        if (prime[i])
            allPrimes.push_back(i);
    }
    // for (int x : allPrimes)
    //     cout << x << " ";

    // n ke vangbo sorbonimno
    vector<int> factor;
    int i = 0;
    while (n > 1)
    {
        if (n % allPrimes[i] == 0)
        {
            n /= allPrimes[i];
            factor.push_back(allPrimes[i]);
        }
        else
            i++;
    }
    for (int x : factor)
        cout << x << " ";

    return 0;
}