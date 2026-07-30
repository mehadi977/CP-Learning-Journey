#include<bits/stdc++.h>
using namespace std;
// Sieve
vector<int> allPrime;
void sieve(long long n)
{
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            allPrime.push_back(i);
            for (long long j = i + i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
}
//
int main()
{
    

    return 0;
}