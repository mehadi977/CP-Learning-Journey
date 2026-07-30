#include <bits/stdc++.h>
using namespace std;
int mxN = 100;
vector<int> AllPrime;
void prim()
{
    vector<bool> prime(mxN + 1, true);
    for (int i = 2; i * i <= mxN; i++)
    {
        if (prime[i])
            for (int j = i + i; j <= mxN; j += i)
            {
                prime[j] = false;
            }
    }
    for (int i = 2; i <= mxN; i++)
    {
        if (prime[i])
            AllPrime.push_back(i);
    }

    // for (int p : AllPrime)
    //     cout << p << " ";
}
int main()
{
    prim();
    int n;
    cin >> n;
    map<int, int> mp;
    int idx = 0;
    while (n > 1)
    {
        while (n % AllPrime[idx] == 0)
        {
            mp[AllPrime[idx]]++;
            n /= AllPrime[idx];
        }
        idx++;
    }

    for (auto [val, cnt] : mp)
        cout << val << " -> " << cnt << endl;

    return 0;
}