// sieve of Eratosthenes... holo prime check korar ekta algorithm
// Step1: n input neoa
// step2: boolin vector(n) neo sob true;
// step3: 2 theke loop chalano jei index false n theke suru kore tar shob multiple k false kore dibo tar mane false gulo prime na.
// step4: ekhon j index gulo true ogulo e prime number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i*i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                // if (j % i == 0)
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
            cout << i << " ";
    }
    if (prime[20])
        cout << "Prime";
    else
        cout
            << "Not Prime";

    return 0;
}